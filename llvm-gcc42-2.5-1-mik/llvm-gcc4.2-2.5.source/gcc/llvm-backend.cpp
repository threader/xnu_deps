/* LLVM LOCAL begin (ENTIRE FILE!)  */
/* High-level LLVM backend interface 
Copyright (C) 2005, 2006, 2007 Free Software Foundation, Inc.
Contributed by Chris Lattner (sabre@nondot.org)

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

#include "llvm-internal.h"
#include "llvm-debug.h"
#include "llvm-file-ostream.h"
#include "llvm/Constants.h"
#include "llvm/DerivedTypes.h"
#include "llvm/Module.h"
#include "llvm/ModuleProvider.h"
#include "llvm/PassManager.h"
#include "llvm/ValueSymbolTable.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Analysis/Verifier.h"
#include "llvm/Assembly/Writer.h"
#include "llvm/Assembly/PrintModulePass.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/CodeGen/RegAllocRegistry.h"
#include "llvm/CodeGen/SchedulerRegistry.h"
#include "llvm/Target/SubtargetFeature.h"
#include "llvm/Target/TargetData.h"
#include "llvm/Target/TargetLowering.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetMachineRegistry.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/IPO.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/ADT/StringMap.h"
#include "llvm/Support/Streams.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/System/Program.h"
#include <cassert>
#undef VISIBILITY_HIDDEN
extern "C" {
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "flags.h"
#include "tree.h"
#include "diagnostic.h"
#include "output.h"
#include "target.h"
#include "toplev.h"
#include "timevar.h"
#include "tm.h"
#include "function.h"
#include "tree-inline.h"
#include "langhooks.h"
#include "cgraph.h"
#include "params.h"
}

// Non-zero if bytecode from PCH is successfully read.
int flag_llvm_pch_read;

// Non-zero if libcalls should not be simplified.
int flag_no_simplify_libcalls;

// Global state for the LLVM backend.
Module *TheModule = 0;
DebugInfo *TheDebugInfo = 0;
TargetMachine *TheTarget = 0;
TargetFolder *TheFolder = 0;
TypeConverter *TheTypeConverter = 0;
llvm::OStream *AsmOutFile = 0;
llvm::OStream *AsmIntermediateOutFile = 0;

/// DisableLLVMOptimizations - Allow the user to specify:
/// "-mllvm -disable-llvm-optzns" on the llvm-gcc command line to force llvm
/// optimizations off.
static cl::opt<bool> DisableLLVMOptimizations("disable-llvm-optzns");

std::vector<std::pair<Function*, int> > StaticCtors, StaticDtors;
SmallSetVector<Constant*, 32> AttributeUsedGlobals;
std::vector<Constant*> AttributeNoinlineFunctions;
std::vector<Constant*> AttributeAnnotateGlobals;

/// PerFunctionPasses - This is the list of cleanup passes run per-function
/// as each is compiled.  In cases where we are not doing IPO, it includes the 
/// code generator.
static FunctionPassManager *PerFunctionPasses = 0;
static PassManager *PerModulePasses = 0;
static FunctionPassManager *CodeGenPasses = 0;

static void createPerFunctionOptimizationPasses();
static void createPerModuleOptimizationPasses();
static void destroyOptimizationPasses();

// Forward decl visibility style to global.
void handleVisibility(tree decl, GlobalValue *GV) {
  // If decl has visibility specified explicitely (via attribute) - honour
  // it. Otherwise (e.g. visibility specified via -fvisibility=hidden) honour
  // only if symbol is local.
  if (TREE_PUBLIC(decl) &&
      (DECL_VISIBILITY_SPECIFIED(decl) || !DECL_EXTERNAL(decl))) {
    if (DECL_VISIBILITY(decl) == VISIBILITY_HIDDEN)
      GV->setVisibility(GlobalValue::HiddenVisibility);
    else if (DECL_VISIBILITY(decl) == VISIBILITY_PROTECTED)
      GV->setVisibility(GlobalValue::ProtectedVisibility);
    else if (DECL_VISIBILITY(decl) == VISIBILITY_DEFAULT)
      GV->setVisibility(Function::DefaultVisibility);
  }
}

void llvm_initialize_backend(void) {
  // Initialize LLVM options.
  std::vector<const char*> Args;
  Args.push_back(progname); // program name

  // Allow targets to specify PIC options and other stuff to the corresponding
  // LLVM backends.
#ifdef LLVM_SET_ARCH_OPTIONS
  LLVM_SET_ARCH_OPTIONS(Args);
#endif
#ifdef LLVM_SET_TARGET_OPTIONS
  LLVM_SET_TARGET_OPTIONS(Args);
#endif
  
  if (time_report)
    Args.push_back("--time-passes");
  if (fast_math_flags_set_p())
    Args.push_back("--enable-unsafe-fp-math");
  if (!flag_omit_frame_pointer)
    Args.push_back("--disable-fp-elim");
  if (!flag_zero_initialized_in_bss)
    Args.push_back("--nozero-initialized-in-bss");
  if (flag_debug_asm)
    Args.push_back("--asm-verbose");
  if (flag_debug_pass_structure)
    Args.push_back("--debug-pass=Structure");
  if (flag_debug_pass_arguments)
    Args.push_back("--debug-pass=Arguments");
  if (optimize_size || optimize < 3)
    // Reduce inline limit. Default limit is 200.
    Args.push_back("--inline-threshold=50");
  if (flag_unwind_tables)
    Args.push_back("--unwind-tables");

  // If there are options that should be passed through to the LLVM backend
  // directly from the command line, do so now.  This is mainly for debugging
  // purposes, and shouldn't really be for general use.
  std::vector<std::string> ArgStrings;

  if (flag_limited_precision > 0) {
    std::string Arg("--limit-float-precision="+utostr(flag_limited_precision));
    ArgStrings.push_back(Arg);
  }

  if (flag_stack_protect > 0) {
    std::string Arg("--stack-protector-buffer-size=" +
                    utostr(PARAM_VALUE(PARAM_SSP_BUFFER_SIZE)));
    ArgStrings.push_back(Arg);
  }

  for (unsigned i = 0, e = ArgStrings.size(); i != e; ++i)
    Args.push_back(ArgStrings[i].c_str());

  std::vector<std::string> LLVM_Optns; // Avoid deallocation before opts parsed!
  if (llvm_optns) {
    SplitString(llvm_optns, LLVM_Optns);
    for(unsigned i = 0, e = LLVM_Optns.size(); i != e; ++i)
      Args.push_back(LLVM_Optns[i].c_str());
  }
 
  Args.push_back(0);  // Null terminator.
  int pseudo_argc = Args.size()-1;
  cl::ParseCommandLineOptions(pseudo_argc, (char**)&Args[0]);

  TheModule = new Module("");

  // If the target wants to override the architecture, e.g. turning
  // powerpc-darwin-... into powerpc64-darwin-... when -m64 is enabled, do so
  // now.
  std::string TargetTriple = TARGET_NAME;
#ifdef LLVM_OVERRIDE_TARGET_ARCH
  std::string Arch = LLVM_OVERRIDE_TARGET_ARCH();
  if (!Arch.empty()) {
    std::string::size_type DashPos = TargetTriple.find('-');
    if (DashPos != std::string::npos)// If we have a sane t-t, replace the arch.
      TargetTriple = Arch + TargetTriple.substr(DashPos);
  }
#endif
#ifdef LLVM_OVERRIDE_TARGET_VERSION
  char *NewTriple;
  bool OverRidden = LLVM_OVERRIDE_TARGET_VERSION(TargetTriple.c_str(),
                                                 &NewTriple);
  if (OverRidden)
    TargetTriple = std::string(NewTriple);
#endif
  TheModule->setTargetTriple(TargetTriple);
  
  TheTypeConverter = new TypeConverter();
  
  // Create the TargetMachine we will be generating code with.
  // FIXME: Figure out how to select the target and pass down subtarget info.
  std::string Err;
  const TargetMachineRegistry::entry *TME = 
    TargetMachineRegistry::getClosestStaticTargetForModule(*TheModule, Err);
  if (!TME) {
    cerr << "Did not get a target machine!\n";
    exit(1);
  }

  // Figure out the subtarget feature string we pass to the target.
  std::string FeatureStr;
  // The target can set LLVM_SET_SUBTARGET_FEATURES to configure the LLVM
  // backend.
#ifdef LLVM_SET_SUBTARGET_FEATURES
  SubtargetFeatures Features;
  LLVM_SET_SUBTARGET_FEATURES(Features);
  FeatureStr = Features.getString();
#endif
  TheTarget = TME->CtorFn(*TheModule, FeatureStr);
  assert(TheTarget->getTargetData()->isBigEndian() == BYTES_BIG_ENDIAN);

  TheFolder = new TargetFolder(*TheTarget->getTargetData());

  // Install information about target datalayout stuff into the module for
  // optimizer use.
  TheModule->setDataLayout(TheTarget->getTargetData()->
                           getStringRepresentation());

  RegisterScheduler::setDefault(createDefaultScheduler);
  
  if (optimize)
    RegisterRegAlloc::setDefault(createLinearScanRegisterAllocator);
  else
    RegisterRegAlloc::setDefault(createLocalRegisterAllocator);

  // FIXME - Do not disable debug info while writing pch.
  if (!flag_pch_file &&
      !optimize && debug_info_level > DINFO_LEVEL_NONE)
    TheDebugInfo = new DebugInfo(TheModule);
}

/// Set backend options that may only be known at codegen time.
void performLateBackendInitialization(void) {
  // The Ada front-end sets flag_exceptions only after processing the file.
  ExceptionHandling = flag_exceptions;
}

void llvm_lang_dependent_init(const char *Name) {
  if (Name)
    TheModule->setModuleIdentifier(Name);
}

oFILEstream *AsmOutStream = 0;
static raw_ostream *AsmOutRawStream = 0;
oFILEstream *AsmIntermediateOutStream = 0;

/// Read bytecode from PCH file. Initialize TheModule and setup
/// LTypes vector.
void llvm_pch_read(const unsigned char *Buffer, unsigned Size) {
  std::string ModuleName = TheModule->getModuleIdentifier();

  delete TheModule;
  delete TheDebugInfo;

  clearTargetBuiltinCache();

  MemoryBuffer *MB = MemoryBuffer::getNewMemBuffer(Size, ModuleName.c_str());
  memcpy((char*)MB->getBufferStart(), Buffer, Size);

  std::string ErrMsg;
  TheModule = ParseBitcodeFile(MB, &ErrMsg);
  delete MB;

  // FIXME - Do not disable debug info while writing pch.
  if (!flag_pch_file &&
      !optimize && debug_info_level > DINFO_LEVEL_NONE)
    TheDebugInfo = new DebugInfo(TheModule);

  if (!TheModule) {
    cerr << "Error reading bytecodes from PCH file\n";
    cerr << ErrMsg << "\n";
    exit(1);
  }

  if (PerFunctionPasses || PerModulePasses) {
    destroyOptimizationPasses();

    // Don't run codegen, when we should output PCH
    if (flag_pch_file)
      llvm_pch_write_init();
  }

  // Read LLVM Types string table
  readLLVMTypesStringTable();
  readLLVMValues();

  flag_llvm_pch_read = 1;
}

// Initialize PCH writing. 
void llvm_pch_write_init(void) {
  timevar_push(TV_LLVM_INIT);
  AsmOutStream = new oFILEstream(asm_out_file);
  // FIXME: disentangle ostream madness here.  Kill off ostream and FILE.
  AsmOutRawStream = new raw_os_ostream(*AsmOutStream);
  AsmOutFile = new OStream(*AsmOutStream);

  PerModulePasses = new PassManager();
  PerModulePasses->add(new TargetData(*TheTarget->getTargetData()));

  // If writing to stdout, set binary mode.
  if (asm_out_file == stdout)
    sys::Program::ChangeStdoutToBinary();

  // Emit an LLVM .bc file to the output.  This is used when passed
  // -emit-llvm -c to the GCC driver.
  PerModulePasses->add(CreateBitcodeWriterPass(*AsmOutStream));
  
  // Disable emission of .ident into the output file... which is completely
  // wrong for llvm/.bc emission cases.
  flag_no_ident = 1;

  flag_llvm_pch_read = 0;

  timevar_pop(TV_LLVM_INIT);
}

static void destroyOptimizationPasses() {
  delete PerFunctionPasses;
  delete PerModulePasses;
  delete CodeGenPasses;

  PerFunctionPasses = 0;
  PerModulePasses   = 0;
  CodeGenPasses     = 0;
}

static void createPerFunctionOptimizationPasses() {
  if (PerFunctionPasses) 
    return;

  // Create and set up the per-function pass manager.
  // FIXME: Move the code generator to be function-at-a-time.
  PerFunctionPasses =
    new FunctionPassManager(new ExistingModuleProvider(TheModule));
  PerFunctionPasses->add(new TargetData(*TheTarget->getTargetData()));

  // In -O0 if checking is disabled, we don't even have per-function passes.
  bool HasPerFunctionPasses = false;
#ifdef ENABLE_CHECKING
  PerFunctionPasses->add(createVerifierPass());
  HasPerFunctionPasses = true;
#endif

  if (optimize > 0 && !DisableLLVMOptimizations) {
    HasPerFunctionPasses = true;
    PerFunctionPasses->add(createCFGSimplificationPass());
    if (optimize == 1)
      PerFunctionPasses->add(createPromoteMemoryToRegisterPass());
    else
      PerFunctionPasses->add(createScalarReplAggregatesPass());
    PerFunctionPasses->add(createInstructionCombiningPass());
  }

  // If there are no module-level passes that have to be run, we codegen as
  // each function is parsed.
  // FIXME: We can't figure this out until we know there are no always-inline
  // functions.
  // FIXME: This is disabled right now until bugs can be worked out.  Reenable
  // this for fast -O0 compiles!
  if (!emit_llvm_bc && !emit_llvm && 0) {
    FunctionPassManager *PM = PerFunctionPasses;    
    HasPerFunctionPasses = true;

    // Normal mode, emit a .s file by running the code generator.
    // Note, this also adds codegenerator level optimization passes.
    switch (TheTarget->addPassesToEmitFile(*PM, *AsmOutRawStream,
                                           TargetMachine::AssemblyFile,
                                           /*FAST*/optimize == 0)) {
    default:
    case FileModel::Error:
      cerr << "Error interfacing to target machine!\n";
      exit(1);
    case FileModel::AsmFile:
      break;
    }

    if (TheTarget->addPassesToEmitFileFinish(*PM, 0, /*Fast*/optimize == 0)) {
      cerr << "Error interfacing to target machine!\n";
      exit(1);
    }
  }
  
  if (HasPerFunctionPasses) {
    PerFunctionPasses->doInitialization();
  } else {
    delete PerFunctionPasses;
    PerFunctionPasses = 0;
  }
}

static void createPerModuleOptimizationPasses() {
  if (PerModulePasses)
    // llvm_pch_write_init has already created the per module passes.
    return;

  // FIXME: AT -O0/O1, we should stream out functions at a time.
  PerModulePasses = new PassManager();
  PerModulePasses->add(new TargetData(*TheTarget->getTargetData()));
  bool HasPerModulePasses = false;
  bool NeedAlwaysInliner = false;
  if (flag_inline_trees <= 1) {
    // If full inliner is not run, check if always-inline is needed to handle
    // functions that are  marked as always_inline.
    for (Module::iterator I = TheModule->begin(), E = TheModule->end();
         I != E; ++I)
      if (I->hasFnAttr(Attribute::AlwaysInline)) {
        NeedAlwaysInliner = true;
        break;
      }
  }

  if (!DisableLLVMOptimizations) {
    HasPerModulePasses = true;
    PassManager *PM = PerModulePasses;
    if (optimize == 0) {
      if (flag_inline_trees > 1)                // respect -fno-inline-functions
        PM->add(createFunctionInliningPass());    // Inline small functions
      else if (NeedAlwaysInliner)
        PM->add(createAlwaysInlinerPass());       // Inline always_inline funcs
    } else {
      if (flag_unit_at_a_time)
        PM->add(createRaiseAllocationsPass());    // call %malloc -> malloc inst
      PM->add(createCFGSimplificationPass());     // Clean up disgusting code
      PM->add(createPromoteMemoryToRegisterPass()); // Kill useless allocas
      if (flag_unit_at_a_time) {
        PM->add(createGlobalOptimizerPass());     // Optimize out global vars
        PM->add(createGlobalDCEPass());           // Remove unused fns and globs
        PM->add(createIPConstantPropagationPass()); // IP Constant Propagation
        PM->add(createDeadArgEliminationPass());  // Dead argument elimination
      }
      PM->add(createInstructionCombiningPass());  // Clean up after IPCP & DAE
      PM->add(createCFGSimplificationPass());     // Clean up after IPCP & DAE
      if (flag_unit_at_a_time) {
        if (flag_exceptions)
          PM->add(createPruneEHPass());           // Remove dead EH info
        PM->add(createFunctionAttrsPass());       // Deduce function attrs
      }
      if (flag_inline_trees > 1)                // respect -fno-inline-functions
        PM->add(createFunctionInliningPass());    // Inline small functions
      else if (NeedAlwaysInliner)
        PM->add(createAlwaysInlinerPass());       // Inline always_inline funcs
      if (optimize > 2)
        PM->add(createArgumentPromotionPass());   // Scalarize uninlined fn args
      if (!flag_no_simplify_libcalls)
        PM->add(createSimplifyLibCallsPass());    // Library Call Optimizations
      PM->add(createInstructionCombiningPass());  // Cleanup for scalarrepl.
      PM->add(createJumpThreadingPass());         // Thread jumps.
      PM->add(createCFGSimplificationPass());     // Merge & remove BBs
      PM->add(createScalarReplAggregatesPass());  // Break up aggregate allocas
      PM->add(createInstructionCombiningPass());  // Combine silly seq's
      PM->add(createCondPropagationPass());       // Propagate conditionals
      PM->add(createTailCallEliminationPass());   // Eliminate tail calls
      PM->add(createCFGSimplificationPass());     // Merge & remove BBs
      PM->add(createReassociatePass());           // Reassociate expressions
      PM->add(createLoopRotatePass());            // Rotate Loop
      PM->add(createLICMPass());                  // Hoist loop invariants
      // At -O2, loop unswitch should not increase code size.
      PM->add(createLoopUnswitchPass(optimize_size || optimize < 3));
      PM->add(createLoopIndexSplitPass());        // Split loop index
      PM->add(createInstructionCombiningPass());  
      PM->add(createIndVarSimplifyPass());        // Canonicalize indvars
      PM->add(createLoopDeletionPass());          // Delete dead loops
      if (flag_unroll_loops)
        PM->add(createLoopUnrollPass());          // Unroll small loops
      PM->add(createInstructionCombiningPass());  // Clean up after the unroller
      PM->add(createGVNPass());                   // Remove redundancies
      PM->add(createMemCpyOptPass());             // Remove memcpy / form memset
      PM->add(createSCCPPass());                  // Constant prop with SCCP
    
      // Run instcombine after redundancy elimination to exploit opportunities
      // opened up by them.
      PM->add(createInstructionCombiningPass());
      PM->add(createCondPropagationPass());       // Propagate conditionals
      PM->add(createDeadStoreEliminationPass());  // Delete dead stores
      PM->add(createAggressiveDCEPass());         // Delete dead instructions
      PM->add(createCFGSimplificationPass());     // Merge & remove BBs

      if (flag_unit_at_a_time) {
        PM->add(createStripDeadPrototypesPass()); // Get rid of dead prototypes
        PM->add(createDeadTypeEliminationPass()); // Eliminate dead types
      }

      if (optimize > 1 && flag_unit_at_a_time)
        PM->add(createConstantMergePass());       // Merge dup global constants 
    }
  }

  if (emit_llvm_bc) {
    // Emit an LLVM .bc file to the output.  This is used when passed
    // -emit-llvm -c to the GCC driver.
    PerModulePasses->add(CreateBitcodeWriterPass(*AsmOutStream));
    HasPerModulePasses = true;
  } else if (emit_llvm) {
    // Emit an LLVM .ll file to the output.  This is used when passed 
    // -emit-llvm -S to the GCC driver.
    PerModulePasses->add(createPrintModulePass(AsmOutRawStream));
    HasPerModulePasses = true;
  } else {
    // If there are passes we have to run on the entire module, we do codegen
    // as a separate "pass" after that happens.
    // However if there are no module-level passes that have to be run, we
    // codegen as each function is parsed.
    // FIXME: This is disabled right now until bugs can be worked out.  Reenable
    // this for fast -O0 compiles!
    if (PerModulePasses || 1) {
      FunctionPassManager *PM = CodeGenPasses =
        new FunctionPassManager(new ExistingModuleProvider(TheModule));
      PM->add(new TargetData(*TheTarget->getTargetData()));

      // Normal mode, emit a .s file by running the code generator.
      // Note, this also adds codegenerator level optimization passes.
      switch (TheTarget->addPassesToEmitFile(*PM, *AsmOutRawStream,
                                             TargetMachine::AssemblyFile,
                                             /*FAST*/optimize == 0)) {
      default:
      case FileModel::Error:
        cerr << "Error interfacing to target machine!\n";
        exit(1);
      case FileModel::AsmFile:
        break;
      }

      if (TheTarget->addPassesToEmitFileFinish(*PM, 0, /*Fast*/optimize == 0)) {
        cerr << "Error interfacing to target machine!\n";
        exit(1);
      }
    }
  }

  if (!HasPerModulePasses) {
    delete PerModulePasses;
    PerModulePasses = 0;
  }
}

// llvm_asm_file_start - Start the .s file.
void llvm_asm_file_start(void) {
  timevar_push(TV_LLVM_INIT);
  AsmOutStream = new oFILEstream(asm_out_file);
  // FIXME: disentangle ostream madness here.  Kill off ostream and FILE.
  AsmOutRawStream = new raw_os_ostream(*AsmOutStream);
  AsmOutFile = new OStream(*AsmOutStream);

  flag_llvm_pch_read = 0;

  if (emit_llvm_bc || emit_llvm)
    // Disable emission of .ident into the output file... which is completely
    // wrong for llvm/.bc emission cases.
    flag_no_ident = 1;

  // If writing to stdout, set binary mode.
  if (asm_out_file == stdout)
    sys::Program::ChangeStdoutToBinary();

  AttributeUsedGlobals.clear();
  timevar_pop(TV_LLVM_INIT);
}

/// ConvertStructorsList - Convert a list of static ctors/dtors to an
/// initializer suitable for the llvm.global_[cd]tors globals.
static void CreateStructorsList(std::vector<std::pair<Function*, int> > &Tors,
                                const char *Name) {
  std::vector<Constant*> InitList;
  std::vector<Constant*> StructInit;
  StructInit.resize(2);
  
  const Type *FPTy = FunctionType::get(Type::VoidTy, std::vector<const Type*>(),
                                       false);
  FPTy = PointerType::getUnqual(FPTy);
  
  for (unsigned i = 0, e = Tors.size(); i != e; ++i) {
    StructInit[0] = ConstantInt::get(Type::Int32Ty, Tors[i].second);
    
    // __attribute__(constructor) can be on a function with any type.  Make sure
    // the pointer is void()*.
    StructInit[1] = TheFolder->CreateBitCast(Tors[i].first, FPTy);
    InitList.push_back(ConstantStruct::get(StructInit, false));
  }
  Constant *Array =
    ConstantArray::get(ArrayType::get(InitList[0]->getType(), InitList.size()),
                       InitList);
  new GlobalVariable(Array->getType(), false, GlobalValue::AppendingLinkage,
                     Array, Name, TheModule);
}

// llvm_asm_file_end - Finish the .s file.
void llvm_asm_file_end(void) {
  timevar_push(TV_LLVM_PERFILE);

  performLateBackendInitialization();
  createPerFunctionOptimizationPasses();

  if (flag_pch_file) {
    writeLLVMTypesStringTable();
    writeLLVMValues();
  }

  // Add an llvm.global_ctors global if needed.
  if (!StaticCtors.empty())
    CreateStructorsList(StaticCtors, "llvm.global_ctors");
  // Add an llvm.global_dtors global if needed.
  if (!StaticDtors.empty())
    CreateStructorsList(StaticDtors, "llvm.global_dtors");
  
  if (!AttributeUsedGlobals.empty()) {
    std::vector<Constant *> AUGs;
    const Type *SBP= PointerType::getUnqual(Type::Int8Ty);
    for (SmallSetVector<Constant *,32>::iterator AI = AttributeUsedGlobals.begin(),
           AE = AttributeUsedGlobals.end(); AI != AE; ++AI) {
      Constant *C = *AI;
      AUGs.push_back(TheFolder->CreateBitCast(C, SBP));
    }

    ArrayType *AT = ArrayType::get(SBP, AUGs.size());
    Constant *Init = ConstantArray::get(AT, AUGs);
    GlobalValue *gv = new GlobalVariable(AT, false, 
                       GlobalValue::AppendingLinkage, Init,
                       "llvm.used", TheModule);
    gv->setSection("llvm.metadata");
    AttributeUsedGlobals.clear();
  }
  
  // Add llvm.noinline
  if (!AttributeNoinlineFunctions.empty()) {
    const Type *SBP= PointerType::getUnqual(Type::Int8Ty);
    ArrayType *AT = ArrayType::get(SBP, AttributeNoinlineFunctions.size());
    Constant *Init = ConstantArray::get(AT, AttributeNoinlineFunctions);
    GlobalValue *gv = new GlobalVariable(AT, false, 
                                        GlobalValue::AppendingLinkage, Init,
                                        "llvm.noinline", TheModule);
    gv->setSection("llvm.metadata");
    
    // Clear vector
    AttributeNoinlineFunctions.clear();
  }
  
  // Add llvm.global.annotations
  if (!AttributeAnnotateGlobals.empty()) {
    
    Constant *Array =
    ConstantArray::get(ArrayType::get(AttributeAnnotateGlobals[0]->getType(), 
                                      AttributeAnnotateGlobals.size()),
                       AttributeAnnotateGlobals);
    GlobalValue *gv = new GlobalVariable(Array->getType(), false, 
                                         GlobalValue::AppendingLinkage, Array, 
                                         "llvm.global.annotations", TheModule); 
    gv->setSection("llvm.metadata");
    AttributeAnnotateGlobals.clear();
  
  }
  
  // Finish off the per-function pass.
  if (PerFunctionPasses)
    PerFunctionPasses->doFinalization();

  // Emit intermediate file before module level optimization passes are run.
  if (flag_debug_llvm_module_opt) {
    
    static PassManager *IntermediatePM = new PassManager();
    IntermediatePM->add(new TargetData(*TheTarget->getTargetData()));

    char asm_intermediate_out_filename[MAXPATHLEN];
    strcpy(&asm_intermediate_out_filename[0], asm_file_name);
    strcat(&asm_intermediate_out_filename[0],".0");
    FILE *asm_intermediate_out_file = fopen(asm_intermediate_out_filename, "w+b");
    AsmIntermediateOutStream = new oFILEstream(asm_intermediate_out_file);
    AsmIntermediateOutFile = new OStream(*AsmIntermediateOutStream);
    raw_ostream *AsmIntermediateRawOutStream = 
      new raw_os_ostream(*AsmIntermediateOutStream);
    if (emit_llvm_bc)
      IntermediatePM->add(CreateBitcodeWriterPass(*AsmIntermediateOutStream));
    if (emit_llvm)
      IntermediatePM->add(createPrintModulePass(AsmIntermediateRawOutStream));
    IntermediatePM->run(*TheModule);
    AsmIntermediateRawOutStream->flush();
    delete AsmIntermediateRawOutStream;
    AsmIntermediateRawOutStream = 0;
    AsmIntermediateOutStream->flush();
    fflush(asm_intermediate_out_file);
    delete AsmIntermediateOutStream;
    AsmIntermediateOutStream = 0;
    delete AsmIntermediateOutFile;
    AsmIntermediateOutFile = 0;
  }

  // Run module-level optimizers, if any are present.
  createPerModuleOptimizationPasses();
  if (PerModulePasses)
    PerModulePasses->run(*TheModule);
  
  // Run the code generator, if present.
  if (CodeGenPasses) {
    CodeGenPasses->doInitialization();
    for (Module::iterator I = TheModule->begin(), E = TheModule->end();
         I != E; ++I)
      if (!I->isDeclaration())
        CodeGenPasses->run(*I);
    CodeGenPasses->doFinalization();
  }

  AsmOutRawStream->flush();
  AsmOutStream->flush();
  fflush(asm_out_file);
  delete AsmOutRawStream;
  AsmOutRawStream = 0;
  delete AsmOutStream;
  AsmOutStream = 0;
  delete AsmOutFile;
  AsmOutFile = 0;
  timevar_pop(TV_LLVM_PERFILE);
}

// llvm_call_llvm_shutdown - Release LLVM global state.
void llvm_call_llvm_shutdown(void) {
  llvm_shutdown();
}

// llvm_emit_code_for_current_function - Top level interface for emitting a
// function to the .s file.
void llvm_emit_code_for_current_function(tree fndecl) {
  if (cfun->nonlocal_goto_save_area)
    sorry("%Jnon-local gotos not supported by LLVM", fndecl);

  if (errorcount || sorrycount) {
    TREE_ASM_WRITTEN(fndecl) = 1;
    return;  // Do not process broken code.
  }
  timevar_push(TV_LLVM_FUNCS);

  // Convert the AST to raw/ugly LLVM code.
  Function *Fn;
  {
    TreeToLLVM Emitter(fndecl);
    enum symbol_visibility vis = DECL_VISIBILITY (fndecl);

    if (vis != VISIBILITY_DEFAULT)
      // "asm_out.visibility" emits an important warning if we're using a
      // visibility that's not supported by the target.
      targetm.asm_out.visibility(fndecl, vis);

    Fn = Emitter.EmitFunction();
  }

#if 0
  if (dump_file) {
    fprintf (dump_file,
             "\n\n;;\n;; Full LLVM generated for this function:\n;;\n");
    Fn->dump();
  }
#endif

  performLateBackendInitialization();
  createPerFunctionOptimizationPasses();

  if (PerFunctionPasses)
    PerFunctionPasses->run(*Fn);
  
  // TODO: Nuke the .ll code for the function at -O[01] if we don't want to
  // inline it or something else.
  
  // There's no need to defer outputting this function any more; we
  // know we want to output it.
  DECL_DEFER_OUTPUT(fndecl) = 0;
  
  // Finally, we have written out this function!
  TREE_ASM_WRITTEN(fndecl) = 1;
  timevar_pop(TV_LLVM_FUNCS);
}

// emit_alias_to_llvm - Given decl and target emit alias to target.
void emit_alias_to_llvm(tree decl, tree target, tree target_decl) {
  if (errorcount || sorrycount) {
    TREE_ASM_WRITTEN(decl) = 1;
    return;  // Do not process broken code.
  }

  timevar_push(TV_LLVM_GLOBALS);

  // Get or create LLVM global for our alias.
  GlobalValue *V = cast<GlobalValue>(DECL_LLVM(decl));
  
  GlobalValue *Aliasee = NULL;
  
  if (target_decl)
    Aliasee = cast<GlobalValue>(DECL_LLVM(target_decl));
  else {
    // This is something insane. Probably only LTHUNKs can be here
    // Try to grab decl from IDENTIFIER_NODE

    // Query SymTab for aliasee
    const char* AliaseeName = IDENTIFIER_POINTER(target);
    Aliasee =
      dyn_cast_or_null<GlobalValue>(TheModule->
                                    getValueSymbolTable().lookup(AliaseeName));

    // Last resort. Query for name set via __asm__
    if (!Aliasee) {
      std::string starred = std::string("\001") + AliaseeName;
      Aliasee =
        dyn_cast_or_null<GlobalValue>(TheModule->
                                      getValueSymbolTable().lookup(starred));
    }
    
    if (!Aliasee) {
      if (lookup_attribute ("weakref", DECL_ATTRIBUTES (decl))) {
        if (GlobalVariable *GV = dyn_cast<GlobalVariable>(V))
          Aliasee = new GlobalVariable(GV->getType(),
                                       GV->isConstant(),
                                       GlobalVariable::ExternalWeakLinkage,
                                       NULL,
                                       AliaseeName,
                                       TheModule);
        else if (Function *F = dyn_cast<Function>(V))
          Aliasee = Function::Create(F->getFunctionType(),
                                 Function::ExternalWeakLinkage,
                                 AliaseeName,
                                 TheModule);
        else
          assert(0 && "Unsuported global value");
      } else {
        error ("%J%qD aliased to undefined symbol %qs", decl, decl, AliaseeName);
        timevar_pop(TV_LLVM_GLOBALS);
        return;
      }
    }
  }

  GlobalValue::LinkageTypes Linkage;

  // A weak alias has TREE_PUBLIC set but not the other bits.
  if (DECL_LLVM_PRIVATE(decl))
    Linkage = GlobalValue::PrivateLinkage;
  else if (DECL_WEAK(decl))
    Linkage = GlobalValue::WeakLinkage;
  else if (!TREE_PUBLIC(decl))
    Linkage = GlobalValue::InternalLinkage;
  else
    Linkage = GlobalValue::ExternalLinkage;

  GlobalAlias* GA = new GlobalAlias(Aliasee->getType(), Linkage, "",
                                    Aliasee, TheModule);

  handleVisibility(decl, GA);

  if (GA->getType()->canLosslesslyBitCastTo(V->getType()))
    V->replaceAllUsesWith(ConstantExpr::getBitCast(GA, V->getType()));
  else if (!V->use_empty()) {
    error ("%J Alias %qD used with invalid type!", decl, decl);
    timevar_pop(TV_LLVM_GLOBALS);
    return;
  }
    
  changeLLVMValue(V, GA);
  GA->takeName(V);
  if (GlobalVariable *GV = dyn_cast<GlobalVariable>(V))
    GV->eraseFromParent();
  else if (GlobalAlias *GA = dyn_cast<GlobalAlias>(V))
    GA->eraseFromParent();
  else if (Function *F = dyn_cast<Function>(V))
    F->eraseFromParent();
  else
    assert(0 && "Unsuported global value");

  TREE_ASM_WRITTEN(decl) = 1;
  
  timevar_pop(TV_LLVM_GLOBALS);
  return;
}

// Convert string to global value. Use existing global if possible.
Constant* ConvertMetadataStringToGV(const char *str) {
  
  Constant *Init = ConstantArray::get(std::string(str));

  // Use cached string if it exists.
  static std::map<Constant*, GlobalVariable*> StringCSTCache;
  GlobalVariable *&Slot = StringCSTCache[Init];
  if (Slot) return Slot;
  
  // Create a new string global.
  GlobalVariable *GV = new GlobalVariable(Init->getType(), true,
                                          GlobalVariable::InternalLinkage,
                                          Init, ".str", TheModule);
  GV->setSection("llvm.metadata");
  Slot = GV;
  return GV;
  
}

/// AddAnnotateAttrsToGlobal - Adds decls that have a
/// annotate attribute to a vector to be emitted later.
void AddAnnotateAttrsToGlobal(GlobalValue *GV, tree decl) {
  
  // Handle annotate attribute on global.
  tree annotateAttr = lookup_attribute("annotate", DECL_ATTRIBUTES (decl));
  if (annotateAttr == 0)
    return;
  
  // Get file and line number
  Constant *lineNo = ConstantInt::get(Type::Int32Ty, DECL_SOURCE_LINE(decl));
  Constant *file = ConvertMetadataStringToGV(DECL_SOURCE_FILE(decl));
  const Type *SBP= PointerType::getUnqual(Type::Int8Ty);
  file = TheFolder->CreateBitCast(file, SBP);
 
  // There may be multiple annotate attributes. Pass return of lookup_attr 
  //  to successive lookups.
  while (annotateAttr) {
    
    // Each annotate attribute is a tree list.
    // Get value of list which is our linked list of args.
    tree args = TREE_VALUE(annotateAttr);
    
    // Each annotate attribute may have multiple args.
    // Treat each arg as if it were a separate annotate attribute.
    for (tree a = args; a; a = TREE_CHAIN(a)) {
      // Each element of the arg list is a tree list, so get value
      tree val = TREE_VALUE(a);
      
      // Assert its a string, and then get that string.
      assert(TREE_CODE(val) == STRING_CST && 
             "Annotate attribute arg should always be a string");
      Constant *strGV = TreeConstantToLLVM::EmitLV_STRING_CST(val);
      Constant *Element[4] = {
        TheFolder->CreateBitCast(GV,SBP),
        TheFolder->CreateBitCast(strGV,SBP),
        file,
        lineNo
      };
 
      AttributeAnnotateGlobals.push_back(ConstantStruct::get(Element, 4, false));
    }
      
    // Get next annotate attribute.
    annotateAttr = TREE_CHAIN(annotateAttr);
    if (annotateAttr)
      annotateAttr = lookup_attribute("annotate", annotateAttr);
  }
}

/// reset_initializer_llvm - Change the initializer for a global variable.
void reset_initializer_llvm(tree decl) {
  // If there were earlier errors we can get here when DECL_LLVM has not
  // been set.  Don't crash.
  // We can also get here when DECL_LLVM has not been set for some object
  // referenced in the initializer.  Don't crash then either.
  if (errorcount || sorrycount)
    return;

  // Get or create the global variable now.
  GlobalVariable *GV = cast<GlobalVariable>(DECL_LLVM(decl));
  
  // Visibility may also have changed.
  handleVisibility(decl, GV);

  // Convert the initializer over.
  Constant *Init = TreeConstantToLLVM::Convert(DECL_INITIAL(decl));

  // Set the initializer.
  GV->setInitializer(Init);
}
  
/// reset_type_and_initializer_llvm - Change the type and initializer for 
/// a global variable.
void reset_type_and_initializer_llvm(tree decl) {
  // If there were earlier errors we can get here when DECL_LLVM has not
  // been set.  Don't crash.
  // We can also get here when DECL_LLVM has not been set for some object
  // referenced in the initializer.  Don't crash then either.
  if (errorcount || sorrycount)
    return;

  // Get or create the global variable now.
  GlobalVariable *GV = cast<GlobalVariable>(DECL_LLVM(decl));
  
  // Visibility may also have changed.
  handleVisibility(decl, GV);

  // Temporary to avoid infinite recursion (see comments emit_global_to_llvm)
  GV->setInitializer(UndefValue::get(GV->getType()->getElementType()));

  // Convert the initializer over.
  Constant *Init = TreeConstantToLLVM::Convert(DECL_INITIAL(decl));

  // If we had a forward definition that has a type that disagrees with our
  // initializer, insert a cast now.  This sort of thing occurs when we have a
  // global union, and the LLVM type followed a union initializer that is
  // different from the union element used for the type.
  if (GV->getType()->getElementType() != Init->getType()) {
    GV->removeFromParent();
    GlobalVariable *NGV = new GlobalVariable(Init->getType(), GV->isConstant(),
                                             GV->getLinkage(), 0,
                                             GV->getName(), TheModule);
    NGV->setVisibility(GV->getVisibility());
    GV->replaceAllUsesWith(TheFolder->CreateBitCast(NGV, GV->getType()));
    if (AttributeUsedGlobals.count(GV)) {
      AttributeUsedGlobals.remove(GV);
      AttributeUsedGlobals.insert(NGV);
    }
    changeLLVMValue(GV, NGV);
    delete GV;
    SET_DECL_LLVM(decl, NGV);
    GV = NGV;
  }

  // Set the initializer.
  GV->setInitializer(Init);
}
  
/// emit_global_to_llvm - Emit the specified VAR_DECL or aggregate CONST_DECL to
/// LLVM as a global variable.  This function implements the end of
/// assemble_variable.
void emit_global_to_llvm(tree decl) {
  if (errorcount || sorrycount) {
    TREE_ASM_WRITTEN(decl) = 1;
    return;  // Do not process broken code.
  }

  // FIXME: Support alignment on globals: DECL_ALIGN.
  // FIXME: DECL_PRESERVE_P indicates the var is marked with attribute 'used'.

  // Global register variables don't turn into LLVM GlobalVariables.
  if (TREE_CODE(decl) == VAR_DECL && DECL_REGISTER(decl))
    return;

  // If tree nodes says defer output then do not emit global yet.
  if (CODE_CONTAINS_STRUCT (TREE_CODE (decl), TS_DECL_WITH_VIS) 
      && (DECL_DEFER_OUTPUT(decl)))
      return;

  timevar_push(TV_LLVM_GLOBALS);

  // Get or create the global variable now.
  GlobalVariable *GV = cast<GlobalVariable>(DECL_LLVM(decl));
  
  // Convert the initializer over.
  Constant *Init;
  if (DECL_INITIAL(decl) == 0 || DECL_INITIAL(decl) == error_mark_node) {
    // This global should be zero initialized.  Reconvert the type in case the
    // forward def of the global and the real def differ in type (e.g. declared
    // as 'int A[]', and defined as 'int A[100]').
    Init = Constant::getNullValue(ConvertType(TREE_TYPE(decl)));
  } else {
    assert((TREE_CONSTANT(DECL_INITIAL(decl)) || 
            TREE_CODE(DECL_INITIAL(decl)) == STRING_CST) &&
           "Global initializer should be constant!");
    
    // Temporarily set an initializer for the global, so we don't infinitely
    // recurse.  If we don't do this, we can hit cases where we see "oh a global
    // with an initializer hasn't been initialized yet, call emit_global_to_llvm
    // on it".  When constructing the initializer it might refer to itself.
    // this can happen for things like void *G = &G;
    //
    GV->setInitializer(UndefValue::get(GV->getType()->getElementType()));
    Init = TreeConstantToLLVM::Convert(DECL_INITIAL(decl));
  }

  // If we had a forward definition that has a type that disagrees with our
  // initializer, insert a cast now.  This sort of thing occurs when we have a
  // global union, and the LLVM type followed a union initializer that is
  // different from the union element used for the type.
  if (GV->getType()->getElementType() != Init->getType()) {
    GV->removeFromParent();
    GlobalVariable *NGV = new GlobalVariable(Init->getType(), GV->isConstant(),
                                             GlobalValue::ExternalLinkage, 0,
                                             GV->getName(), TheModule);
    GV->replaceAllUsesWith(TheFolder->CreateBitCast(NGV, GV->getType()));
    if (AttributeUsedGlobals.count(GV)) {
      AttributeUsedGlobals.remove(GV);
      AttributeUsedGlobals.insert(NGV);
    }
    changeLLVMValue(GV, NGV);
    delete GV;
    SET_DECL_LLVM(decl, NGV);
    GV = NGV;
  }
 
  // Set the initializer.
  GV->setInitializer(Init);

  // Set thread local (TLS)
  if (TREE_CODE(decl) == VAR_DECL && DECL_THREAD_LOCAL_P(decl))
    GV->setThreadLocal(true);

  // Set the linkage.
  if (CODE_CONTAINS_STRUCT (TREE_CODE (decl), TS_DECL_WITH_VIS)
      && DECL_LLVM_PRIVATE(decl)) {
    GV->setLinkage(GlobalValue::PrivateLinkage);
  } else if (!TREE_PUBLIC(decl)) {
    GV->setLinkage(GlobalValue::InternalLinkage);
  } else if (DECL_WEAK(decl) || DECL_ONE_ONLY(decl)) {
    GV->setLinkage(GlobalValue::WeakLinkage);
  } else if (DECL_COMMON(decl) &&  // DECL_COMMON is only meaningful if no init
              (!DECL_INITIAL(decl) || DECL_INITIAL(decl) == error_mark_node)) {
    // llvm-gcc also includes DECL_VIRTUAL_P here.
    GV->setLinkage(GlobalValue::CommonLinkage);
  } else if (DECL_COMDAT(decl)) {
    GV->setLinkage(GlobalValue::LinkOnceLinkage);
  }

#ifdef TARGET_ADJUST_LLVM_LINKAGE
  TARGET_ADJUST_LLVM_LINKAGE(GV,decl);
#endif /* TARGET_ADJUST_LLVM_LINKAGE */

  handleVisibility(decl, GV);

  // Set the section for the global.
  if (TREE_CODE(decl) == VAR_DECL) {
    if (DECL_SECTION_NAME(decl)) {
      GV->setSection(TREE_STRING_POINTER(DECL_SECTION_NAME(decl)));
#ifdef LLVM_IMPLICIT_TARGET_GLOBAL_VAR_SECTION
    } else if (const char *Section = 
                LLVM_IMPLICIT_TARGET_GLOBAL_VAR_SECTION(decl)) {
      GV->setSection(Section);
#endif
    }
    
    // Set the alignment for the global if one of the following condition is met
    // 1) DECL_ALIGN is better than the alignment as per ABI specification
    // 2) DECL_ALIGN is set by user.
    if (DECL_ALIGN(decl)) {
      unsigned TargetAlign =
        getTargetData().getABITypeAlignment(GV->getType()->getElementType());
      if (DECL_USER_ALIGN(decl) ||
          8 * TargetAlign < (unsigned)DECL_ALIGN(decl))
        GV->setAlignment(DECL_ALIGN(decl) / 8);
    }

    // Handle used decls
    if (DECL_PRESERVE_P (decl))
      AttributeUsedGlobals.insert(GV);
  
    // Add annotate attributes for globals
    if (DECL_ATTRIBUTES(decl))
      AddAnnotateAttrsToGlobal(GV, decl);
  
#ifdef LLVM_IMPLICIT_TARGET_GLOBAL_VAR_SECTION
  } else if (TREE_CODE(decl) == CONST_DECL) {
    if (const char *Section = 
        LLVM_IMPLICIT_TARGET_GLOBAL_VAR_SECTION(decl)) {
      GV->setSection(Section);

      /* LLVM LOCAL - begin radar 6389998 */
#ifdef TARGET_ADJUST_CFSTRING_NAME
      TARGET_ADJUST_CFSTRING_NAME(GV, Section);
#endif
      /* LLVM LOCAL - end radar 6389998 */
    }
#endif
  }

  if (TheDebugInfo) TheDebugInfo->EmitGlobalVariable(GV, decl); 

  TREE_ASM_WRITTEN(decl) = 1;
  timevar_pop(TV_LLVM_GLOBALS);
}


/// ValidateRegisterVariable - Check that a static "asm" variable is
/// well-formed.  If not, emit error messages and return true.  If so, return
/// false.
bool ValidateRegisterVariable(tree decl) {
  int RegNumber = decode_reg_name(extractRegisterName(decl));
  const Type *Ty = ConvertType(TREE_TYPE(decl));

  // If this has already been processed, don't emit duplicate error messages.
  if (DECL_LLVM_SET_P(decl)) {
    // Error state encoded into DECL_LLVM.
    return cast<ConstantInt>(DECL_LLVM(decl))->getZExtValue();
  }
  
  /* Detect errors in declaring global registers.  */
  if (RegNumber == -1)
    error("%Jregister name not specified for %qD", decl, decl);
  else if (RegNumber < 0)
    error("%Jinvalid register name for %qD", decl, decl);
  else if (TYPE_MODE(TREE_TYPE(decl)) == BLKmode)
    error("%Jdata type of %qD isn%'t suitable for a register", decl, decl);
#if 0 // FIXME: enable this.
  else if (!HARD_REGNO_MODE_OK(RegNumber, TYPE_MODE(TREE_TYPE(decl))))
    error("%Jregister specified for %qD isn%'t suitable for data type",
          decl, decl);
#endif
  else if (DECL_INITIAL(decl) != 0 && TREE_STATIC(decl))
    error("global register variable has initial value");
  else if (!Ty->isSingleValueType())
    sorry("%JLLVM cannot handle register variable %qD, report a bug",
          decl, decl);
  else {
    if (TREE_THIS_VOLATILE(decl))
      warning(0, "volatile register variables don%'t work as you might wish");
    
    SET_DECL_LLVM(decl, ConstantInt::getFalse());
    return false;  // Everything ok.
  }
  SET_DECL_LLVM(decl, ConstantInt::getTrue());
  return true;
}


// make_decl_llvm - Create the DECL_RTL for a VAR_DECL or FUNCTION_DECL.  DECL
// should have static storage duration.  In other words, it should not be an
// automatic variable, including PARM_DECLs.
//
// There is, however, one exception: this function handles variables explicitly
// placed in a particular register by the user.
//
// This function corresponds to make_decl_rtl in varasm.c, and is implicitly
// called by DECL_LLVM if a decl doesn't have an LLVM set.
//
void make_decl_llvm(tree decl) {
#ifdef ENABLE_CHECKING
  // Check that we are not being given an automatic variable.
  // A weak alias has TREE_PUBLIC set but not the other bits.
  if (TREE_CODE(decl) == PARM_DECL || TREE_CODE(decl) == RESULT_DECL
      || (TREE_CODE(decl) == VAR_DECL && !TREE_STATIC(decl) &&
          !TREE_PUBLIC(decl) && !DECL_EXTERNAL(decl) && !DECL_REGISTER(decl)))
    abort();
  // And that we were not given a type or a label.  */
  else if (TREE_CODE(decl) == TYPE_DECL || TREE_CODE(decl) == LABEL_DECL)
    abort ();
#endif
  
  // For a duplicate declaration, we can be called twice on the
  // same DECL node.  Don't discard the LLVM already made.
  if (DECL_LLVM_SET_P(decl)) return;

  if (errorcount || sorrycount)
    return;  // Do not process broken code.
  
  
  // Global register variable with asm name, e.g.:
  // register unsigned long esp __asm__("ebp");
  if (TREE_CODE(decl) != FUNCTION_DECL && DECL_REGISTER(decl)) {
    // This  just verifies that the variable is ok.  The actual "load/store"
    // code paths handle accesses to the variable.
    ValidateRegisterVariable(decl);
    return;
  }
  
  timevar_push(TV_LLVM_GLOBALS);

  const char *Name = "";
  if (DECL_NAME(decl))
    if (tree AssemblerName = DECL_ASSEMBLER_NAME(decl))
      Name = IDENTIFIER_POINTER(AssemblerName);
  
  // Now handle ordinary static variables and functions (in memory).
  // Also handle vars declared register invalidly.
  if (Name[0] == 1) {
#ifdef REGISTER_PREFIX
    if (strlen (REGISTER_PREFIX) != 0) {
      int reg_number = decode_reg_name(Name);
      if (reg_number >= 0 || reg_number == -3)
        error("%Jregister name given for non-register variable %qD",
              decl, decl);
    }
#endif
  }
  
  // Specifying a section attribute on a variable forces it into a
  // non-.bss section, and thus it cannot be common.
  if (TREE_CODE(decl) == VAR_DECL && DECL_SECTION_NAME(decl) != NULL_TREE &&
      DECL_INITIAL(decl) == NULL_TREE && DECL_COMMON(decl))
    DECL_COMMON(decl) = 0;
  
  // Variables can't be both common and weak.
  if (TREE_CODE(decl) == VAR_DECL && DECL_WEAK(decl))
    DECL_COMMON(decl) = 0;
  
  // Okay, now we need to create an LLVM global variable or function for this
  // object.  Note that this is quite possibly a forward reference to the
  // object, so its type may change later.
  if (TREE_CODE(decl) == FUNCTION_DECL) {
    assert(Name[0] && "Function with empty name!");
    // If this function has already been created, reuse the decl.  This happens
    // when we have something like __builtin_memset and memset in the same file.
    Function *FnEntry = TheModule->getFunction(Name);
    if (FnEntry == 0) {
      unsigned CC;
      AttrListPtr PAL;
      const FunctionType *Ty = 
        TheTypeConverter->ConvertFunctionType(TREE_TYPE(decl), decl, NULL,
                                              CC, PAL);
      FnEntry = Function::Create(Ty, Function::ExternalLinkage, Name, TheModule);
      FnEntry->setCallingConv(CC);
      FnEntry->setAttributes(PAL);

      // Check for external weak linkage
      if (DECL_EXTERNAL(decl) && DECL_WEAK(decl))
        FnEntry->setLinkage(Function::ExternalWeakLinkage);
      
#ifdef TARGET_ADJUST_LLVM_LINKAGE
      TARGET_ADJUST_LLVM_LINKAGE(FnEntry,decl);
#endif /* TARGET_ADJUST_LLVM_LINKAGE */

     handleVisibility(decl, FnEntry);

      // If FnEntry got renamed, then there is already an object with this name
      // in the symbol table.  If this happens, the old one must be a forward
      // decl, just replace it with a cast of the new one.
      if (FnEntry->getName() != Name) {
        GlobalVariable *G = TheModule->getGlobalVariable(Name, true);
        assert(G && G->isDeclaration() && "A global turned into a function?");
        
        // Replace any uses of "G" with uses of FnEntry.
        Value *GInNewType = TheFolder->CreateBitCast(FnEntry, G->getType());
        G->replaceAllUsesWith(GInNewType);
        
        // Update the decl that points to G.
        changeLLVMValue(G, GInNewType);
        
        // Now we can give GV the proper name.
        FnEntry->takeName(G);
        
        // G is now dead, nuke it.
        G->eraseFromParent();
      }
    }
    SET_DECL_LLVM(decl, FnEntry);
  } else {
    assert((TREE_CODE(decl) == VAR_DECL ||
            TREE_CODE(decl) == CONST_DECL) && "Not a function or var decl?");
    const Type *Ty = ConvertType(TREE_TYPE(decl));
    GlobalVariable *GV ;

    // If we have "extern void foo", make the global have type {} instead of
    // type void.
    if (Ty == Type::VoidTy) Ty = StructType::get(NULL, NULL);

    if (Name[0] == 0) {   // Global has no name.
      GV = new GlobalVariable(Ty, false, GlobalValue::ExternalLinkage, 0,
                              "", TheModule);

      // Check for external weak linkage
      if (DECL_EXTERNAL(decl) && DECL_WEAK(decl))
        GV->setLinkage(GlobalValue::ExternalWeakLinkage);
      
#ifdef TARGET_ADJUST_LLVM_LINKAGE
      TARGET_ADJUST_LLVM_LINKAGE(GV,decl);
#endif /* TARGET_ADJUST_LLVM_LINKAGE */

      handleVisibility(decl, GV);
    } else {
      // If the global has a name, prevent multiple vars with the same name from
      // being created.
      GlobalVariable *GVE = TheModule->getGlobalVariable(Name, true);
    
      if (GVE == 0) {
        GV = new GlobalVariable(Ty, false, GlobalValue::ExternalLinkage,0,
                                Name, TheModule);

        // Check for external weak linkage
        if (DECL_EXTERNAL(decl) && DECL_WEAK(decl))
          GV->setLinkage(GlobalValue::ExternalWeakLinkage);
        
#ifdef TARGET_ADJUST_LLVM_LINKAGE
        TARGET_ADJUST_LLVM_LINKAGE(GV,decl);
#endif /* TARGET_ADJUST_LLVM_LINKAGE */

	handleVisibility(decl, GV);

        // If GV got renamed, then there is already an object with this name in
        // the symbol table.  If this happens, the old one must be a forward
        // decl, just replace it with a cast of the new one.
        if (GV->getName() != Name) {
          Function *F = TheModule->getFunction(Name);
          assert(F && F->isDeclaration() && "A function turned into a global?");
          
          // Replace any uses of "F" with uses of GV.
          Value *FInNewType = TheFolder->CreateBitCast(GV, F->getType());
          F->replaceAllUsesWith(FInNewType);
          
          // Update the decl that points to F.
          changeLLVMValue(F, FInNewType);

          // Now we can give GV the proper name.
          GV->takeName(F);
          
          // F is now dead, nuke it.
          F->eraseFromParent();
        }
        
      } else {
        GV = GVE;  // Global already created, reuse it.
      }
    }
    
    if ((TREE_READONLY(decl) && !TREE_SIDE_EFFECTS(decl)) || 
        TREE_CODE(decl) == CONST_DECL) {
      if (DECL_EXTERNAL(decl)) {
        // Mark external globals constant even though they could be marked
        // non-constant in the defining translation unit.  The definition of the
        // global determines whether the global is ultimately constant or not,
        // marking this constant will allow us to do some extra (legal)
        // optimizations that we would otherwise not be able to do.  (In C++,
        // any global that is 'C++ const' may not be readonly: it could have a
        // dynamic initializer.
        //
        GV->setConstant(true);
      } else {
        // Mark readonly globals with constant initializers constant.
        if (DECL_INITIAL(decl) != error_mark_node && // uninitialized?
            DECL_INITIAL(decl) &&
            (TREE_CONSTANT(DECL_INITIAL(decl)) ||
             TREE_CODE(DECL_INITIAL(decl)) == STRING_CST))
          GV->setConstant(true);
      }
    }

    // Set thread local (TLS)
    if (TREE_CODE(decl) == VAR_DECL && DECL_THREAD_LOCAL_P(decl))
      GV->setThreadLocal(true);

    SET_DECL_LLVM(decl, GV);
  }
  timevar_pop(TV_LLVM_GLOBALS);
}

/// llvm_get_decl_name - Used by varasm.c, returns the specified declaration's
/// name.
const char *llvm_get_decl_name(void *LLVM) {
  if (LLVM)
    if (const ValueName *VN = ((Value*)LLVM)->getValueName())
      return VN->getKeyData();
  return "";
}

// llvm_mark_decl_weak - Used by varasm.c, called when a decl is found to be
// weak, but it already had an llvm object created for it. This marks the LLVM
// object weak as well.
void llvm_mark_decl_weak(tree decl) {
  assert(DECL_LLVM_SET_P(decl) && DECL_WEAK(decl) &&
         isa<GlobalValue>(DECL_LLVM(decl)) && "Decl isn't marked weak!");
  GlobalValue *GV = cast<GlobalValue>(DECL_LLVM(decl));

  // Do not mark something that is already known to be linkonce or internal.
  if (GV->hasExternalLinkage()) {
    if (GV->isDeclaration())
      GV->setLinkage(GlobalValue::ExternalWeakLinkage);
    else
      GV->setLinkage(GlobalValue::WeakLinkage);
  }
}

// llvm_emit_ctor_dtor - Called to emit static ctors/dtors to LLVM code.  fndecl
// is a 'void()' FUNCTION_DECL for the code, initprio is the init priority, and
// isCtor indicates whether this is a ctor or dtor.
//
void llvm_emit_ctor_dtor(tree FnDecl, int InitPrio, int isCtor) {
  mark_decl_referenced(FnDecl);  // Inform cgraph that we used the global.
  
  if (errorcount || sorrycount) return;
  
  Function *F = cast_or_null<Function>(DECL_LLVM(FnDecl));
  (isCtor ? &StaticCtors:&StaticDtors)->push_back(std::make_pair(F, InitPrio));
}

void llvm_emit_typedef(tree decl) {
  // Need hooks for debug info?
  return;
}

// llvm_emit_file_scope_asm - Emit the specified string as a file-scope inline
// asm block.
//
void llvm_emit_file_scope_asm(const char *string) {
  if (TheModule->getModuleInlineAsm().empty())
    TheModule->setModuleInlineAsm(string);
  else
    TheModule->setModuleInlineAsm(TheModule->getModuleInlineAsm() + "\n" +
                                  string);
}


// print_llvm - Print the specified LLVM chunk like an operand, called by
// print-tree.c for tree dumps.
//
void print_llvm(FILE *file, void *LLVM) {
  oFILEstream FS(file);
  FS << "LLVM: ";
  WriteAsOperand(FS, (Value*)LLVM, true, TheModule);
}

// print_llvm_type - Print the specified LLVM type symbolically, called by
// print-tree.c for tree dumps.
//
void print_llvm_type(FILE *file, void *LLVM) {
  oFILEstream FS(file);
  FS << "LLVM: ";
  WriteTypeSymbolic(FS, (const Type*)LLVM, TheModule);
}

// Get a register name given its decl.  In 4.2 unlike 4.0 these names
// have been run through set_user_assembler_name which means they may
// have a leading \1 at this point; compensate.

const char* extractRegisterName(tree decl) {
  const char* Name = IDENTIFIER_POINTER(DECL_ASSEMBLER_NAME(decl));
  return (*Name==1) ? Name+1 : Name;
}
/* LLVM LOCAL end (ENTIRE FILE!)  */
