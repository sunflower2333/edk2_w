# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h" 1
# 16 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h"
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h" 1
# 22 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/AArch64/ProcessorBind.h" 1
# 94 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/AArch64/ProcessorBind.h"
  typedef unsigned long long UINT64;
  typedef long long INT64;
  typedef unsigned int UINT32;
  typedef int INT32;
  typedef unsigned short UINT16;
  typedef unsigned short CHAR16;
  typedef short INT16;
  typedef unsigned char BOOLEAN;
  typedef unsigned char UINT8;
  typedef char CHAR8;
  typedef signed char INT8;







typedef UINT64 UINTN;





typedef INT64 INTN;
# 23 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h" 2
# 48 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
extern UINT8 _VerifySizeofBOOLEAN[(sizeof(BOOLEAN) == (1)) / (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(sizeof(INT8) == (1)) / (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(sizeof(UINT8) == (1)) / (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(sizeof(INT16) == (2)) / (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(sizeof(UINT16) == (2)) / (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(sizeof(INT32) == (4)) / (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(sizeof(UINT32) == (4)) / (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(sizeof(INT64) == (8)) / (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(sizeof(UINT64) == (8)) / (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(sizeof(CHAR8) == (1)) / (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(sizeof(CHAR16) == (2)) / (sizeof(CHAR16) == (2))];
# 67 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
typedef enum {
  __VerifyUint8EnumValue = 0xff
} __VERIFY_UINT8_ENUM_SIZE;

typedef enum {
  __VerifyUint16EnumValue = 0xffff
} __VERIFY_UINT16_ENUM_SIZE;

typedef enum {
  __VerifyUint32EnumValue = 0xffffffff
} __VERIFY_UINT32_ENUM_SIZE;

extern UINT8 _VerifySizeof__VERIFY_UINT8_ENUM_SIZE[(sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT16_ENUM_SIZE[(sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT32_ENUM_SIZE[(sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4))];
# 274 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
typedef struct {
  UINT32 Data1;
  UINT16 Data2;
  UINT16 Data3;
  UINT8 Data4[8];
} GUID;




typedef struct {
  UINT8 Addr[4];
} IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} IPv6_ADDRESS;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY *ForwardLink;
  LIST_ENTRY *BackLink;
};
# 709 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
typedef __builtin_va_list VA_LIST;
# 794 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 958 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1274 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS

ArmMmuBaseLibConstructor (
  void
  );
# 32 "<command-line>" 2
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S"
#------------------------------------------------------------------------------

# Copyright (c) 2016, Linaro Limited. All rights reserved.

# SPDX-License-Identifier: BSD-2-Clause-Patent

#------------------------------------------------------------------------------

# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 10 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/ArmPkg/Library/ArmMmuLib/AArch64/ArmMmuLibReplaceEntry.S" 2

  .set CTRL_M_BIT, (1 << 0)

  .macro __replace_entry, el


  mrs x8, sctlr_el\el
  bic x9, x8, #CTRL_M_BIT
  msr sctlr_el\el, x9
  isb


  str x1, [x0]



  dmb sy
  dc ivac, x0


  lsr x2, x2, #12
  .if \el == 1
  tlbi vaae1, x2
  .else
  tlbi vae\el, x2
  .endif
  dsb nsh


  msr sctlr_el\el, x8
  isb
  .endm







.global ArmReplaceLiveTranslationEntry ; .section ".text.ArmReplaceLiveTranslationEntry", "ax" ; .type ArmReplaceLiveTranslationEntry, %function ; ArmReplaceLiveTranslationEntry:


  mrs x4, daif
  msr daifset, #0xf
  isb



  dc civac, x0
  dsb nsh

  mrs x3, CurrentEL ; cmp x3, #0x8 ; b.gt 3f ; b.eq 2f ; cbnz x3, 1f ; b . ;
1:__replace_entry 1
  b 4f
2:__replace_entry 2
  b 4f
3:__replace_entry 3

4:msr daif, x4
  ret

.globl ArmReplaceLiveTranslationEntrySize

ArmReplaceLiveTranslationEntrySize:
  .long . - ArmReplaceLiveTranslationEntry
