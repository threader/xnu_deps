These files are from my backups and range from anywhere from 2009 to 2014.

I wish i had more notes than.. uuh: At some point, i was setting up to build XNU and updating GCC
and libc/stc++ for Darwin 8/OSX 10.4.11 and apparently i also compiled llvm-gcc-4.2 that i forgot about. 
I seem to have all the original tar.gz files so an original branch can be made i suppose to see what on 
earth i did all those years ago on Darwin 8.

I also found a bunch of old DMG's im wondering what to do about, there amongst xcode and iterm,
so i guess i'll start making repos for 3rd party stuff for convenience, github isnt happy about 
big files though so xcode could ba a pita, from what i've noted looking trough this 

# compilers. libs. core utils.
* GCC 4.2.x is built - and is rebuilt with gcc-4.2
  - gcc-5666.3 
* libstdc++-39 is built with gcc-4.2
  - no idea about /libstdcxx-52 etc.
* LLVM is built with gcc-4.2
* ICU-6.2.22 is built 
* dyld-132.13/
* dtrace-78
* bash-80
* cctools-667.3 
* NEEDS MOER DOC: CoreOSMakefiles-63/
* libBlocksRuntime-0.1
* libdispatch.build/Release/libdispatch up resolved : not sure what's up here
* Libstreams-25
* pb_makefiles-128

# XNU 
* xnu-792.24.17 
* xnu-792.25.20 - appears to be fully built
* xnu-1504.15.3 - has built, no clue here.
* see build_kernel.sh

These sources weigh 210559 items 
(199699 files, 10860 folders) 
5.1 GiB (5,525,599,063 bytes)

The entire .git directory weighs in at an impressive: 
42 items (29 files, 13 folders) 
 780.7 MiB (818,589,348 bytes) 


Noting this error adding the files - i uploaded what i found like gcc-5666 ages ago to github:

warning: adding embedded git repository: gnumake-126.2/make-git/make-dfsg
hint: You've added another git repository inside your current repository.
hint: Clones of the outer repository will not contain the contents of
hint: the embedded repository and will not know how to obtain it.
hint: If you meant to add a submodule, use:
hint:
hint: 	git submodule add <url> gnumake-126.2/make-git/make-dfsg
hint:
hint: If you added this path by mistake, you can remove it from the
hint: index with:
hint:
hint: 	git rm --cached gnumake-126.2/make-git/make-dfsg
hint:
hint: See "git help submodule" for more information.
hint: Disable this message with "git config advice.addEmbeddedRepo false"
warning: adding embedded git repository: libdisp/libdispatch
warning: adding embedded git repository: libstdcxx-39-darwin8-src

