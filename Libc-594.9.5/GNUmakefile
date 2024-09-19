# Remove any NEXT_ROOT argument
override MAKEOVERRIDES := $(filter-out NEXT_ROOT=%,$(MAKEOVERRIDES))
override MAKEFILEPATH := $(subst $(NEXT_ROOT),,$(MAKEFILEPATH))
unexport NEXT_ROOT
MAKEFILEPATH=/Developer/Makefiles/
include /Developer/Makefiles/CoreOS/Standard/Commands.make

all:
	@$(BSDMAKE)

.DEFAULT:
	@$(BSDMAKE) $@
