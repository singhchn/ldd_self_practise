
#$(info Hello World Make just parsed past this line)

#obj-m = ofd.o
#KVERSION = $(shell uname -r)
#all:
#	make -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
#clean:
#	make -C /lib/modules/$(KVERSION)/build M=$(PWD) clean

#make works fine with above piece of code But Not below piece of code.
# think on this.



# Makefile – makefile of our first driver

# #if KERNELRELEASE is not defined, we've been called directly from the command line.
# #Invoke the kernel build system.
# ifeq (${KERNELRELEASE},)
# 	#KERNEL_SOURCE := /usr/src/linux
# 	#KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build
# 	KERNEL_SOURCE := /lib/modules/5.15.0-46-generic/build
# 	PWD := $(shell pwd)
# default:
# 	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules
#
# clean:
# 	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
#
# #Otherwise KERNELRELEASE is defined; we've been invoked from the
# #kernel build system and can use its language.
# else
# 	obj-m := ofd.o
# endif
