## --------------Don't change the line below------------------ ##
# For more information on the different variables, and others you
# may define, see ${SOFT_WORKDIR}/Makefile.skel and/or read the doc
include ${SOFT_WORKDIR}/env/compilation/compilevars.mk

LOCAL_NAME := platform/edrv/rfd/xcv_rda6220

LOCAL_API_DEPENDS := platform \
                     platform/base/common \
                     platform/chip/hal \
                     platform/chip/defs \
					 platform/chip/regs/${CT_ASIC} \
                     platform/edrv \
                     platform/edrv/rfd \
                     platform/base/sx \
                     platform/calib \

LOCAL_MODULE_DEPENDS := 

LOCAL_EXPORT_FLAG += RFD_NO_COOLPROFILE  __CALIB_ENABLED__

#RFD_CALIB RFD_NO_TRACE RFD_NO_ASSERT


# This vpath is used to get the base/common header file.
vpath %.c . ../src
# ../ would be enough ?

C_SRC := drv_xcv.c
S_SRC :=


## --------------Don't change the line below------------------ ##
include ${SOFT_WORKDIR}/env/compilation/compilerules.mk
