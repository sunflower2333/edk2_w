#
# DO NOT EDIT
# This file is auto-generated by build utility
#
# Module Name:
#
#   GNUmakefile
#
# Abstract:
#
#   Auto-generated makefile for building modules, libraries or platform
#
    

#
# Platform Macro Definition
#
PLATFORM_NAME = RPi3
PLATFORM_GUID = 5d30c4fc-93cf-40c9-8486-3badc0410816
PLATFORM_VERSION = 1.0
PLATFORM_RELATIVE_DIR = RPi3
PLATFORM_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/RPi3
PLATFORM_OUTPUT_DIR = Build/RPi3

#
# Module Macro Definition
#
MODULE_NAME = Ip4Dxe
MODULE_GUID = 9FB1A1F3-3B71-4324-B39A-745CBB015FFF
MODULE_NAME_GUID = Ip4Dxe
MODULE_VERSION = 1.0
MODULE_TYPE = UEFI_DRIVER
MODULE_FILE = Ip4Dxe.inf
MODULE_FILE_BASE_NAME = Ip4Dxe
BASE_NAME = $(MODULE_NAME)
MODULE_RELATIVE_DIR = NetworkPkg/Ip4Dxe
PACKAGE_RELATIVE_DIR = Ip4Dxe
MODULE_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe
FFS_OUTPUT_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/FV/Ffs/9FB1A1F3-3B71-4324-B39A-745CBB015FFFIp4Dxe

MODULE_ENTRY_POINT = Ip4DriverEntryPoint
ARCH_ENTRY_POINT = Ip4DriverEntryPoint
IMAGE_ENTRY_POINT = _ModuleEntryPoint

INF_VERSION = 0x00010005
BASE_NAME = Ip4Dxe
MODULE_UNI_FILE = Ip4Dxe.uni
FILE_GUID = 9FB1A1F3-3B71-4324-B39A-745CBB015FFF
MODULE_TYPE = UEFI_DRIVER
VERSION_STRING = 1.0

#
# Build Configuration Macro Definition
#
ARCH = AARCH64
TOOLCHAIN = GCC5
TOOLCHAIN_TAG = GCC5
TARGET = DEBUG

#
# Build Directory Macro Definition
#
# PLATFORM_BUILD_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5
BUILD_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5
BIN_DIR = $(BUILD_DIR)/AARCH64
LIB_DIR = $(BIN_DIR)
MODULE_BUILD_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe
OUTPUT_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT
DEBUG_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG
DEST_DIR_OUTPUT = $(OUTPUT_DIR)
DEST_DIR_DEBUG = $(DEBUG_DIR)

#
# Shell Command Macro
#
CP = cp -f
MV = mv -f
RM = rm -f
MD = mkdir -p
RD = rm -r -f


#
# Tools definitions specific to this module
#
ASLPP = aarch64-linux-gnu-gcc
ASLPP_FLAGS = -x c -E -include AutoGen.h

PKCS7SIGN = Pkcs7Sign
PKCS7SIGN_GUID =  4AAFD29D-68DF-49EE-8AA9-347D375665A7

VPDTOOL = BPDG
VPDTOOL_GUID =  8C3D856A-9BE6-468E-850A-24F7A8D38E08







ASLDLINK = aarch64-linux-gnu-gcc
ASLDLINK_FLAGS = -Wl,--emit-relocs -nostdlib -Wl,--gc-sections -u $(IMAGE_ENTRY_POINT) -Wl,-e,$(IMAGE_ENTRY_POINT),-Map,$(DEST_DIR_DEBUG)/$(BASE_NAME).map -z common-page-size=0x20 -Wl,--entry,ReferenceAcpiTable -u $(IMAGE_ENTRY_POINT) -Wl,--defsym=PECOFF_HEADER_SIZE=0 -Wl,--script=$(EDK_TOOLS_PATH)/Scripts/GccBase.lds -z common-page-size=0x20

GENFW = GenFw
GENFW_FLAGS = 


SLINK = aarch64-linux-gnu-gcc-ar

OBJCOPY_ADDDEBUGFLAG =  --add-gnu-debuglink=$(DEBUG_DIR)/$(MODULE_NAME).debug
OBJCOPY = echo
OBJCOPY_FLAGS = objcopy not needed for

DEPS_FLAGS = -MMD -MF $@.deps


ASM = aarch64-linux-gnu-gcc
ASM_FLAGS = $(ARCHASM_FLAGS) $(PLATFORM_FLAGS) -c -x assembler -imacros AutoGen.h -mlittle-endian

CC_FLAGS = $(ARCHCC_FLAGS) $(PLATFORM_FLAGS) -g -Os -fshort-wchar -fno-builtin -fno-strict-aliasing -Wall -Werror -Wno-array-bounds -include AutoGen.h -fno-common -ffunction-sections -fdata-sections -DSTRING_ARRAY_NAME=$(BASE_NAME)Strings -g -Os -fshort-wchar -fno-builtin -fno-strict-aliasing -Wall -Werror -Wno-array-bounds -include AutoGen.h -fno-common -mlittle-endian -fno-short-enums -fverbose-asm -funsigned-char -ffunction-sections -fdata-sections -Wno-address -fno-asynchronous-unwind-tables -fno-unwind-tables -fno-pic -fno-pie -ffixed-x18 -mcmodel=small -flto -Wno-unused-but-set-variable -Wno-unused-const-variable
CC = aarch64-linux-gnu-gcc
CC_XIPFLAGS =  -mstrict-align -mgeneral-regs-only

ASMLINK = bin16\link16.exe
ASMLINK_FLAGS = /nologo /tiny

TIANO = TianoCompress
TIANO_GUID =  A31280AD-481E-41B6-95E8-127F4C984779

LZMA = LzmaCompress
LZMA_GUID =  EE4E5898-3914-4259-9D6E-DC7BD79403CF

VFR = VfrCompile
VFR_FLAGS = -l -n

ASLCC = aarch64-linux-gnu-gcc
ASLCC_FLAGS = -x c -fno-lto

APP_FLAGS = 

NASM = nasm


OPTROM = EfiRom
OPTROM_FLAGS = -e

DTC_FLAGS = -H epapr
DTC = dtc

MAKE = make

SYMRENAME = echo
SYMRENAME_FLAGS = Symbol renaming not needed for


LZMAF86 = LzmaF86Compress
LZMAF86_GUID =  D42AE6BD-1352-4bfb-909A-CA72A6EAE889

CRC32 = GenCrc32
CRC32_GUID =  FC1BCDB0-7D31-49AA-936A-A4600D9DD083


BROTLI = BrotliCompress
BROTLI_GUID =  3D532050-5CDA-4FD0-879E-0F7F630D5AFB

RC = aarch64-linux-gnu-objcopy
RC_FLAGS = -I binary -O elf64-littleaarch64 -B aarch64 --rename-section .data=.hii

PP = aarch64-linux-gnu-gcc
PP_FLAGS = $(ARCHCC_FLAGS) $(PLATFORM_FLAGS) -E -x assembler-with-cpp -include AutoGen.h -DOPENSBI_EXTERNAL_SBI_TYPES=OpensbiTypes.h

VFRPP = aarch64-linux-gnu-gcc
VFRPP_FLAGS = $(ARCHCC_FLAGS) $(PLATFORM_FLAGS) -x c -E -P -DVFRCOMPILE --include $(MODULE_NAME)StrDefs.h

DLINK_FLAGS = -Wl,--emit-relocs -nostdlib -Wl,--gc-sections -u $(IMAGE_ENTRY_POINT) -Wl,-e,$(IMAGE_ENTRY_POINT),-Map,$(DEST_DIR_DEBUG)/$(BASE_NAME).map -z common-page-size=0x20 -z common-page-size=0x1000 -flto -Os -L/home/hwdk/UEFIPROG/EDKHOME/edk2/ArmPkg/Library/GccLto -llto-aarch64 -Wl,-plugin-opt=-pass-through=-llto-aarch64 -Wno-lto-type-mismatch -Wl,--fix-cortex-a53-843419
DLINK_XIPFLAGS =  -z common-page-size=0x20
DLINK = aarch64-linux-gnu-gcc

PLATFORM_FLAGS = 

RSA2048SHA256SIGN = Rsa2048Sha256Sign
RSA2048SHA256SIGN_GUID =  A7717414-C616-4977-9420-844712A735BF


ASL = iasl
ASL_FLAGS = 
ASL_OUTFLAGS =  -p



NASMB_FLAGS = -f bin

DLINK2_FLAGS = -Wl,--script=$(EDK_TOOLS_PATH)/Scripts/GccBase.lds -Wl,--defsym=PECOFF_HEADER_SIZE=0x228 -Wno-error

DTCPP_FLAGS = -E -x assembler-with-cpp -imacros AutoGen.h -nostdinc -undef
DTCPP = cpp


MAKE_FILE = $(MODULE_BUILD_DIR)/GNUmakefile

#
# Build Macro
#
OBJECT_FILES =  \
    $(OUTPUT_DIR)/AutoGen.obj \
    $(OUTPUT_DIR)/ComponentName.obj \
    $(OUTPUT_DIR)/Ip4Common.obj \
    $(OUTPUT_DIR)/Ip4Config2.obj \
    $(OUTPUT_DIR)/Ip4Config2Impl.obj \
    $(OUTPUT_DIR)/Ip4Config2Nv.obj \
    $(OUTPUT_DIR)/Ip4Driver.obj \
    $(OUTPUT_DIR)/Ip4Icmp.obj \
    $(OUTPUT_DIR)/Ip4If.obj \
    $(OUTPUT_DIR)/Ip4Igmp.obj \
    $(OUTPUT_DIR)/Ip4Impl.obj \
    $(OUTPUT_DIR)/Ip4Input.obj \
    $(OUTPUT_DIR)/Ip4Option.obj \
    $(OUTPUT_DIR)/Ip4Output.obj \
    $(OUTPUT_DIR)/Ip4Route.obj

STATIC_LIBRARY_FILES =  \
    $(BIN_DIR)/ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib/OUTPUT/CompilerIntrinsicsLib.lib \
    $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartClockLib/PL011UartClockLib/OUTPUT/BasePL011UartClockLib.lib \
    $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartLib/PL011UartLib/OUTPUT/PL011UartLib.lib \
    $(BIN_DIR)/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib/OUTPUT/UefiHiiLib.lib \
    $(BIN_DIR)/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib/OUTPUT/UefiHiiServicesLib.lib \
    $(BIN_DIR)/MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort/OUTPUT/BaseDebugLibSerialPort.lib \
    $(BIN_DIR)/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib/OUTPUT/BaseDebugPrintErrorLevelLib.lib \
    $(BIN_DIR)/MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic/OUTPUT/BaseIoLibIntrinsic.lib \
    $(BIN_DIR)/MdePkg/Library/BaseLib/BaseLib/OUTPUT/BaseLib.lib \
    $(BIN_DIR)/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/OUTPUT/BaseMemoryLibOptDxe.lib \
    $(BIN_DIR)/MdePkg/Library/BasePrintLib/BasePrintLib/OUTPUT/BasePrintLib.lib \
    $(BIN_DIR)/MdePkg/Library/BaseStackCheckLib/BaseStackCheckLib/OUTPUT/BaseStackCheckLib.lib \
    $(BIN_DIR)/MdePkg/Library/DxePcdLib/DxePcdLib/OUTPUT/DxePcdLib.lib \
    $(BIN_DIR)/MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib/OUTPUT/UefiBootServicesTableLib.lib \
    $(BIN_DIR)/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib/OUTPUT/UefiDevicePathLib.lib \
    $(BIN_DIR)/MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint/OUTPUT/UefiDriverEntryPoint.lib \
    $(BIN_DIR)/MdePkg/Library/UefiLib/UefiLib/OUTPUT/UefiLib.lib \
    $(BIN_DIR)/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib/OUTPUT/UefiMemoryAllocationLib.lib \
    $(BIN_DIR)/MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib/OUTPUT/UefiRuntimeServicesTableLib.lib \
    $(BIN_DIR)/NetworkPkg/Library/DxeDpcLib/DxeDpcLib/OUTPUT/DxeDpcLib.lib \
    $(BIN_DIR)/NetworkPkg/Library/DxeNetLib/DxeNetLib/OUTPUT/DxeNetLib.lib \
    $(BIN_DIR)/Platform/RaspberryPi/Library/DualSerialPortLib/DualSerialPortLib/OUTPUT/DualSerialPortLib.lib \
    $(OUTPUT_DIR)/Ip4Dxe.lib

INC =  \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe \
    -I$(DEBUG_DIR) \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Test/UnitTest/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Include/AArch64 \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdeModulePkg \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdeModulePkg/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Include

OBJECT_FILES_LIST = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/object_files.lst
STATIC_LIBRARY_FILES_LIST = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/static_library_files.lst


#
# Overridable Target Macro Definitions
#
FORCE_REBUILD = force_build
INIT_TARGET = init
PCH_TARGET =
BC_TARGET = 
CODA_TARGET = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.efi \
              $(FFS_OUTPUT_DIR)/$(MODULE_GUID).map \
              $(FFS_OUTPUT_DIR)/$(MODULE_GUID).ffs \
              

#
# Default target, which will build dependent libraries in addition to source files
#

all: mbuild


#
# Target used when called from platform makefile, which will bypass the build of dependent libraries
#

pbuild: $(INIT_TARGET) $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# ModuleTarget
#

mbuild: $(INIT_TARGET) $(BC_TARGET) gen_libs $(PCH_TARGET) $(CODA_TARGET)

#
# Build Target used in multi-thread build mode, which will bypass the init and gen_libs targets
#

tbuild: $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# Phony target which is used to force executing commands for a target
#
force_build:
	-@

#
# Target to update the FD
#

fds: mbuild gen_fds

#
# Initialization target: print build information and create necessary directories
#
init: info dirs

info:
	-@echo Building ... $(MODULE_DIR)/$(MODULE_FILE) [$(ARCH)]

dirs:
	-@$(MD) $(DEBUG_DIR)
	-@$(MD) $(OUTPUT_DIR)


strdefs:
	-@$(CP) $(DEBUG_DIR)/AutoGen.h $(DEBUG_DIR)/$(MODULE_NAME)StrDefs.h

#
# GenLibsTarget
#
gen_libs:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/DxePcdLib/DxePcdLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseLib/BaseLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartLib/PL011UartLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartClockLib/PL011UartClockLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/Platform/RaspberryPi/Library/DualSerialPortLib/DualSerialPortLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BasePrintLib/BasePrintLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiLib/UefiLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/NetworkPkg/Library/DxeNetLib/DxeNetLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/NetworkPkg/Library/DxeDpcLib/DxeDpcLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib/GNUmakefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseStackCheckLib/BaseStackCheckLib/GNUmakefile
	@cd $(MODULE_BUILD_DIR)

#
# Build Flash Device Image
#
gen_fds:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BUILD_DIR)/GNUmakefile fds
	@cd $(MODULE_BUILD_DIR)

include $(MODULE_BUILD_DIR)/dependency
include $(MODULE_BUILD_DIR)/deps_target

#
# Individual Object Build Targets
#
$(OUTPUT_DIR)/Ip4Impl.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Impl.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Impl.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Impl.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Impl.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Impl.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Impl.c

$(OUTPUT_DIR)/Ip4Igmp.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Igmp.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Igmp.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Igmp.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Igmp.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Igmp.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Igmp.c

$(OUTPUT_DIR)/Ip4Input.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Input.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Input.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Input.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Input.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Input.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Input.c

$(OUTPUT_DIR)/AutoGen.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/AutoGen.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/AutoGen.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/AutoGen.obj : $(DEBUG_DIR)/AutoGen.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./AutoGen.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/AutoGen.c

$(OUTPUT_DIR)/Ip4Output.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Output.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Output.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Output.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Output.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Output.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Output.c

$(OUTPUT_DIR)/Ip4Config2Nv.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Config2Nv.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Config2Nv.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Config2Nv.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2Nv.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Config2Nv.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2Nv.c

$(OUTPUT_DIR)/Ip4Config2.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Config2.obj : $(DEBUG_DIR)/Ip4Config2.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Config2.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Config2.c

$(OUTPUT_DIR)/Ip4Icmp.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Icmp.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Icmp.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Icmp.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Icmp.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Icmp.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Icmp.c

$(OUTPUT_DIR)/Ip4Option.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Option.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Option.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Option.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Option.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Option.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Option.c

$(OUTPUT_DIR)/ComponentName.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/ComponentName.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/ComponentName.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/ComponentName.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/ComponentName.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./ComponentName.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/ComponentName.c

$(OUTPUT_DIR)/Ip4Config2Impl.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Config2Impl.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Config2Impl.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Config2Impl.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2Impl.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Config2Impl.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2Impl.c

$(OUTPUT_DIR)/Ip4Route.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Route.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Route.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Route.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Route.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Route.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Route.c

$(OUTPUT_DIR)/Ip4If.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4If.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4If.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4If.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4If.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4If.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4If.c

$(OUTPUT_DIR)/Ip4Driver.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Driver.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Driver.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Driver.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Driver.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Driver.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Driver.c

$(OUTPUT_DIR)/Ip4Common.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Ip4Common.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Ip4Common.obj : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(OUTPUT_DIR)/Ip4Common.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Common.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/./Ip4Common.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Common.c

$(OUTPUT_DIR)/Ip4Dxe.lib : $(OBJECT_FILES)
$(OUTPUT_DIR)/Ip4Dxe.lib : $(OBJECT_FILES_LIST)
	$(RM) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.lib
	"$(SLINK)" cr /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.lib $(SLINK_FLAGS) @$(OBJECT_FILES_LIST)

$(DEBUG_DIR)/Ip4Dxe.dll : $(MAKE_FILE)
$(DEBUG_DIR)/Ip4Dxe.dll : $(STATIC_LIBRARY_FILES)
$(DEBUG_DIR)/Ip4Dxe.dll : $(STATIC_LIBRARY_FILES_LIST)
	"$(DLINK)" -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll $(DLINK_FLAGS) -Wl,--start-group,@$(STATIC_LIBRARY_FILES_LIST),--end-group $(CC_FLAGS) $(DLINK2_FLAGS)
	"$(OBJCOPY)" $(OBJCOPY_FLAGS) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll

$(OUTPUT_DIR)/Ip4Dxe.efi : $(DEBUG_DIR)/Ip4Dxe.dll
	$(CP) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll $(DEBUG_DIR)/$(MODULE_NAME).debug
	$(OBJCOPY) --strip-unneeded -R .eh_frame /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll
	-$(OBJCOPY) $(OBJCOPY_ADDDEBUGFLAG) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll
	-$(CP) $(DEBUG_DIR)/$(MODULE_NAME).debug $(BIN_DIR)/$(MODULE_NAME_GUID).debug
	"$(GENFW)" -e $(MODULE_TYPE) -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.efi /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/Ip4Dxe.dll $(GENFW_FLAGS)
	$(CP) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.efi $(DEBUG_DIR)
	$(CP) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/OUTPUT/Ip4Dxe.efi $(BIN_DIR)/$(MODULE_NAME_GUID).efi
	-$(CP) $(DEBUG_DIR)/*.map $(OUTPUT_DIR)

$(DEBUG_DIR)/Ip4Config2.c : $(MAKE_FILE)
$(DEBUG_DIR)/Ip4Config2.c : $(DEBUG_DIR)/AutoGen.h
$(DEBUG_DIR)/Ip4Config2.c : $(DEBUG_DIR)/Ip4DxeStrDefs.h
$(DEBUG_DIR)/Ip4Config2.c : /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2.vfr
	"$(VFRPP)" $(DEPS_FLAGS) $(VFRPP_FLAGS) $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/NetworkPkg/Ip4Dxe/Ip4Config2.vfr > $(OUTPUT_DIR)/Ip4Config2.i
	"$(VFR)" $(VFR_FLAGS) --string-db $(OUTPUT_DIR)/$(MODULE_NAME)StrDefs.hpk --output-directory /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG/. $(OUTPUT_DIR)/Ip4Config2.i

$(FFS_OUTPUT_DIR)/$(MODULE_GUID).map : $(OUTPUT_DIR)/Ip4Dxe.map
	test -f $(OUTPUT_DIR)/Ip4Dxe.map && $(CP) $(OUTPUT_DIR)/Ip4Dxe.map $(FFS_OUTPUT_DIR)/$(MODULE_GUID).map
$(FFS_OUTPUT_DIR)/$(MODULE_GUID).ffs : $(FFS_OUTPUT_DIR)/Ip4DxeOffset.raw $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC2.1.pe32 $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC3.ui
	GenFfs -t EFI_FV_FILETYPE_DRIVER -g $(MODULE_GUID) -o $(FFS_OUTPUT_DIR)/$(MODULE_GUID).ffs -oi $(FFS_OUTPUT_DIR)/Ip4DxeOffset.raw -oi $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC2.1.pe32 -oi $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC3.ui
$(FFS_OUTPUT_DIR)/Ip4DxeOffset.raw : $(FFS_OUTPUT_DIR)/Ip4Dxe.offset
	-test -e $(FFS_OUTPUT_DIR)/Ip4Dxe.offset && GenSec -s EFI_SECTION_RAW -o $(FFS_OUTPUT_DIR)/Ip4DxeOffset.raw $(FFS_OUTPUT_DIR)/Ip4Dxe.offset
$(FFS_OUTPUT_DIR)/Ip4Dxe.offset : $(DEBUG_DIR)/Ip4Dxe.efi
	Trim --Vfr-Uni-Offset -o $(FFS_OUTPUT_DIR)/Ip4Dxe.offset --ModuleName=Ip4Dxe --DebugDir=/home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/NetworkPkg/Ip4Dxe/Ip4Dxe/DEBUG 
$(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC2.1.pe32 : $(OUTPUT_DIR)/Ip4Dxe.efi
	-test -e $(OUTPUT_DIR)/Ip4Dxe.efi && GenSec -s EFI_SECTION_PE32 -o $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC2.1.pe32 $(OUTPUT_DIR)/Ip4Dxe.efi
$(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC3.ui : $(MODULE_DIR)/$(MODULE_FILE)
	GenSec -s EFI_SECTION_USER_INTERFACE -n $(MODULE_NAME) -o $(FFS_OUTPUT_DIR)/$(MODULE_GUID)SEC3.ui


#
# clean all intermediate files
#
clean:
	$(RD) $(OUTPUT_DIR)
		$(RM) AutoGenTimeStamp

#
# clean all generated files
#
cleanall:
	$(RD) $(DEBUG_DIR)
	$(RD) $(OUTPUT_DIR)
	$(RM) *.pdb *.idb > NUL 2>&1
	$(RM) $(BIN_DIR)/$(MODULE_NAME).efi
	$(RM) AutoGenTimeStamp

#
# clean all dependent libraries built
#
cleanlib:
	-@test -e $(BIN_DIR)/MdePkg/Library/DxePcdLib/DxePcdLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/DxePcdLib/DxePcdLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseLib/BaseLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseLib/BaseLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartLib/PL011UartLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartLib/PL011UartLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartClockLib/PL011UartClockLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPlatformPkg/Library/PL011UartClockLib/PL011UartClockLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/Platform/RaspberryPi/Library/DualSerialPortLib/DualSerialPortLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/Platform/RaspberryPi/Library/DualSerialPortLib/DualSerialPortLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BasePrintLib/BasePrintLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BasePrintLib/BasePrintLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiLib/UefiLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiLib/UefiLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/NetworkPkg/Library/DxeNetLib/DxeNetLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/NetworkPkg/Library/DxeNetLib/DxeNetLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/NetworkPkg/Library/DxeDpcLib/DxeDpcLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/NetworkPkg/Library/DxeDpcLib/DxeDpcLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib/GNUmakefile cleanall
	-@test -e $(BIN_DIR)/MdePkg/Library/BaseStackCheckLib/BaseStackCheckLib/GNUmakefile && "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)/MdePkg/Library/BaseStackCheckLib/BaseStackCheckLib/GNUmakefile cleanall
	@cd $(MODULE_BUILD_DIR)

