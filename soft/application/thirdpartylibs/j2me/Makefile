## ----------------------------------------------------------- ##
## Don't touch the next line unless you know what you're doing.##
## ----------------------------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/mmi_compilevars.mk

# Name of the module, with toplevel path, e.g. "phy/tests/dishwasher"
LOCAL_NAME := application/thirdpartylibs/j2me

# Space-separated list of modules (libraries) your module depends upon.
# These should include the toplevel name, e.g. "phy/dishes ciitech/hotwater"
LOCAL_MODULE_DEPENDS := 
LOCAL_MODULE_DEPENDS += application/thirdpartylibs/j2me/javacall
LOCAL_MODULE_DEPENDS += application/thirdpartylibs/j2me/javainterface

ifeq "${CT_JVM}" "debug"
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libpcsl_all.a
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libcldc_vm_s_g.a
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libmidp_g.a
endif

ifeq "${CT_JVM}" "prod"
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libpcsl_all.a
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libcldc_vm_s.a
LOCAL_LIB += application/thirdpartylibs/j2me/lib/libmidp.a
endif

ifneq "$(CT_JVM)" "debug"
ifneq "${CT_JVM}" "prod"
$(error "!!!! please set jvm link option,debug or product !!!!")
endif
endif

		
# Set this to any non-null string to signal a module which 
# generates a binary (must contain a "main" entry point). 
# If left null, only a library will be generated.
IS_ENTRY_POINT := 

# Set this to a non-null string to signal a toplevel module, like 
# phy but not like phy/kitchensink. This defines the behavior of 
# make deliv
IS_TOP_LEVEL := yes


# This can be used to define some preprocessor variables to be used in 
# the current module, but also exported to all dependencies.
# This is especially useful in an ENTRY_POINT modules
# Ex. : LOCAL_EXPORT_FLAGS += OS_USED DEBUG will result in 
# -DOS_USED -DDEBUG being passed on each subsequent compile command.
LOCAL_EXPORT_FLAG += 

## ------------------------------------- ##
##	List all your sources here           ##
## ------------------------------------- ##
# Assembly / C code
S_SRC := ${notdir ${wildcard src/*.S}} # uncomment to take all .S files
C_SRC := ${notdir ${wildcard src/*.c}} # uncomment to take all .c files

## ------------------------------------- ##
##  Do Not touch below this line         ##
## ------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilerules.mk
