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
MODULE_NAME = BaseCryptLib
MODULE_GUID = be3bb803-91b6-4da0-bd91-a8b21c18ca5d
MODULE_NAME_GUID = BaseCryptLib
MODULE_VERSION = 1.0
MODULE_TYPE = DXE_DRIVER
MODULE_FILE = BaseCryptLib.inf
MODULE_FILE_BASE_NAME = BaseCryptLib
BASE_NAME = $(MODULE_NAME)
MODULE_RELATIVE_DIR = CryptoPkg/Library/BaseCryptLib
PACKAGE_RELATIVE_DIR = Library/BaseCryptLib
MODULE_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib
FFS_OUTPUT_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/FV/Ffs/be3bb803-91b6-4da0-bd91-a8b21c18ca5dBaseCryptLib

MODULE_ENTRY_POINT = _ModuleEntryPoint
ARCH_ENTRY_POINT = _ModuleEntryPoint
IMAGE_ENTRY_POINT = _ModuleEntryPoint

INF_VERSION = 0x00010005
BASE_NAME = BaseCryptLib
MODULE_UNI_FILE = BaseCryptLib.uni
FILE_GUID = be3bb803-91b6-4da0-bd91-a8b21c18ca5d
MODULE_TYPE = DXE_DRIVER
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
MODULE_BUILD_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib
OUTPUT_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT
DEBUG_DIR = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/DEBUG
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
    $(OUTPUT_DIR)/Cipher/CryptAes.obj \
    $(OUTPUT_DIR)/Hash/CryptMd5.obj \
    $(OUTPUT_DIR)/Hash/CryptSha1.obj \
    $(OUTPUT_DIR)/Hash/CryptSha256.obj \
    $(OUTPUT_DIR)/Hash/CryptSha512.obj \
    $(OUTPUT_DIR)/Hash/CryptSm3.obj \
    $(OUTPUT_DIR)/Hmac/CryptHmacSha256.obj \
    $(OUTPUT_DIR)/Kdf/CryptHkdf.obj \
    $(OUTPUT_DIR)/Pem/CryptPem.obj \
    $(OUTPUT_DIR)/Pk/CryptAuthenticode.obj \
    $(OUTPUT_DIR)/Pk/CryptDh.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs1Oaep.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs5Pbkdf2.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs7Sign.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs7VerifyBase.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs7VerifyCommon.obj \
    $(OUTPUT_DIR)/Pk/CryptPkcs7VerifyEku.obj \
    $(OUTPUT_DIR)/Pk/CryptRsaBasic.obj \
    $(OUTPUT_DIR)/Pk/CryptRsaExt.obj \
    $(OUTPUT_DIR)/Pk/CryptTs.obj \
    $(OUTPUT_DIR)/Pk/CryptX509.obj \
    $(OUTPUT_DIR)/Rand/CryptRand.obj \
    $(OUTPUT_DIR)/SysCall/BaseMemAllocation.obj \
    $(OUTPUT_DIR)/SysCall/CrtWrapper.obj \
    $(OUTPUT_DIR)/SysCall/TimerWrapper.obj \
    $(OUTPUT_DIR)/SysCall/inet_pton.obj

INC =  \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Rand \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pem \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Cipher \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Kdf \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hmac \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib \
    -I$(DEBUG_DIR) \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Test/UnitTest/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/MdePkg/Include/AArch64 \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Private \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/Include \
    -I/home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/OpensslLib/openssl/include

OBJECT_FILES_LIST = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/object_files.lst


#
# Overridable Target Macro Definitions
#
FORCE_REBUILD = force_build
INIT_TARGET = init
PCH_TARGET =
BC_TARGET = 
CODA_TARGET = /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/BaseCryptLib.lib \
              

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
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyBase.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyBase.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyBase.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyBase.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs7VerifyBase.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyBase.c

$(OUTPUT_DIR)/Hmac/CryptHmacSha256.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hmac/CryptHmacSha256.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hmac/CryptHmacSha256.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hmac/CryptHmacSha256.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hmac/CryptHmacSha256.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hmac/CryptHmacSha256.c

$(OUTPUT_DIR)/Hash/CryptSm3.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hash/CryptSm3.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hash/CryptSm3.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSm3.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hash/CryptSm3.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSm3.c

$(OUTPUT_DIR)/Pk/CryptPkcs7Sign.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs7Sign.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs7Sign.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7Sign.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs7Sign.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7Sign.c

$(OUTPUT_DIR)/Hash/CryptSha256.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hash/CryptSha256.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hash/CryptSha256.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha256.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hash/CryptSha256.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha256.c

$(OUTPUT_DIR)/Pk/CryptAuthenticode.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptAuthenticode.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptAuthenticode.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptAuthenticode.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptAuthenticode.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptAuthenticode.c

$(OUTPUT_DIR)/Cipher/CryptAes.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Cipher/CryptAes.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Cipher/CryptAes.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Cipher/CryptAes.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Cipher/CryptAes.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Cipher/CryptAes.c

$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyCommon.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyCommon.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyCommon.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyCommon.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs7VerifyCommon.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyCommon.c

$(OUTPUT_DIR)/Pk/CryptPkcs1Oaep.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs1Oaep.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs1Oaep.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs1Oaep.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs1Oaep.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs1Oaep.c

$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyEku.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyEku.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs7VerifyEku.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyEku.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs7VerifyEku.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs7VerifyEku.c

$(OUTPUT_DIR)/Pk/CryptPkcs5Pbkdf2.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptPkcs5Pbkdf2.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptPkcs5Pbkdf2.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs5Pbkdf2.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptPkcs5Pbkdf2.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptPkcs5Pbkdf2.c

$(OUTPUT_DIR)/Pk/CryptRsaBasic.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptRsaBasic.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptRsaBasic.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptRsaBasic.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptRsaBasic.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptRsaBasic.c

$(OUTPUT_DIR)/Hash/CryptSha1.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hash/CryptSha1.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hash/CryptSha1.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha1.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hash/CryptSha1.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha1.c

$(OUTPUT_DIR)/Kdf/CryptHkdf.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Kdf/CryptHkdf.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Kdf/CryptHkdf.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Kdf/CryptHkdf.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Kdf/CryptHkdf.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Kdf/CryptHkdf.c

$(OUTPUT_DIR)/Rand/CryptRand.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Rand/CryptRand.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Rand/CryptRand.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Rand/CryptRand.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Rand/CryptRand.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Rand/CryptRand.c

$(OUTPUT_DIR)/Hash/CryptMd5.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hash/CryptMd5.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hash/CryptMd5.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptMd5.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hash/CryptMd5.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptMd5.c

$(OUTPUT_DIR)/Pk/CryptTs.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptTs.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptTs.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptTs.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptTs.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptTs.c

$(OUTPUT_DIR)/SysCall/inet_pton.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/SysCall/inet_pton.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/SysCall/inet_pton.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/inet_pton.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/SysCall/inet_pton.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/inet_pton.c

$(OUTPUT_DIR)/Pk/CryptRsaExt.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptRsaExt.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptRsaExt.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptRsaExt.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptRsaExt.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptRsaExt.c

$(OUTPUT_DIR)/Pem/CryptPem.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pem/CryptPem.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pem/CryptPem.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pem/CryptPem.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pem/CryptPem.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pem/CryptPem.c

$(OUTPUT_DIR)/SysCall/BaseMemAllocation.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/SysCall/BaseMemAllocation.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/SysCall/BaseMemAllocation.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/BaseMemAllocation.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/SysCall/BaseMemAllocation.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/BaseMemAllocation.c

$(OUTPUT_DIR)/Hash/CryptSha512.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Hash/CryptSha512.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Hash/CryptSha512.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha512.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Hash/CryptSha512.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Hash/CryptSha512.c

$(OUTPUT_DIR)/Pk/CryptDh.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptDh.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptDh.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptDh.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptDh.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptDh.c

$(OUTPUT_DIR)/SysCall/TimerWrapper.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/SysCall/TimerWrapper.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/SysCall/TimerWrapper.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/TimerWrapper.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/SysCall/TimerWrapper.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/TimerWrapper.c

$(OUTPUT_DIR)/SysCall/CrtWrapper.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/SysCall/CrtWrapper.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/SysCall/CrtWrapper.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/CrtWrapper.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/SysCall/CrtWrapper.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/SysCall/CrtWrapper.c

$(OUTPUT_DIR)/Pk/CryptX509.obj : $(MAKE_FILE)
$(OUTPUT_DIR)/Pk/CryptX509.obj : $(DEBUG_DIR)/AutoGen.h
$(OUTPUT_DIR)/Pk/CryptX509.obj : /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptX509.c
	"$(CC)" $(DEPS_FLAGS) $(CC_FLAGS) -c -o /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/Pk/CryptX509.obj $(INC) /home/hwdk/UEFIPROG/EDKHOME/edk2/CryptoPkg/Library/BaseCryptLib/Pk/CryptX509.c

$(OUTPUT_DIR)/BaseCryptLib.lib : $(OBJECT_FILES)
$(OUTPUT_DIR)/BaseCryptLib.lib : $(OBJECT_FILES_LIST)
	$(RM) /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/BaseCryptLib.lib
	"$(SLINK)" cr /home/hwdk/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/CryptoPkg/Library/BaseCryptLib/BaseCryptLib/OUTPUT/BaseCryptLib.lib $(SLINK_FLAGS) @$(OBJECT_FILES_LIST)



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
	@cd $(MODULE_BUILD_DIR)

