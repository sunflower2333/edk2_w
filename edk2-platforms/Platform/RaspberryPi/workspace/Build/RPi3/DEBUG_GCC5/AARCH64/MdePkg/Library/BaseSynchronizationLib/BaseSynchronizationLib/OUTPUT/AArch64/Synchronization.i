# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/aarch64-linux-gnu/include/stdc-predef.h" 1 3
# 32 "<command-line>" 2
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib/DEBUG/AutoGen.h" 1
# 16 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib/DEBUG/AutoGen.h"
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
# 17 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib/DEBUG/AutoGen.h" 2
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h" 1
# 1076 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdSetSku (
  UINTN SkuId
  );
# 1093 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGet8 (
  UINTN TokenNumber
  );
# 1110 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGet16 (
  UINTN TokenNumber
  );
# 1127 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGet32 (
  UINTN TokenNumber
  );
# 1144 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGet64 (
  UINTN TokenNumber
  );
# 1161 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetPtr (
  UINTN TokenNumber
  );
# 1178 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetBool (
  UINTN TokenNumber
  );
# 1193 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSize (
  UINTN TokenNumber
  );
# 1214 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGetEx8 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1236 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGetEx16 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1255 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGetEx32 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1277 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGetEx64 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1299 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetExPtr (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1321 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetExBool (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1343 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetExSize (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1364 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSet8 (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1384 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSet16 (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1404 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSet32 (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1424 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSet64 (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1454 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetPtr (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1475 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetBool (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1499 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSetEx8 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1524 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSetEx16 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1549 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSetEx32 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1574 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSetEx64 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1605 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetExPtr (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1631 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetExBool (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1652 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet8S (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1671 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet16S (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1690 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet32S (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1709 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet64S (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1738 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetPtrS (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1758 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetBoolS (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1781 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx8S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1805 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx16S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1829 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx32S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1853 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx64S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1883 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExPtrS (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1908 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExBoolS (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1932 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
typedef
void
( *PCD_CALLBACK)(
  const GUID *CallBackGuid,
  UINTN CallBackToken,
  void *TokenData,
  UINTN TokenDataSize
  );
# 1958 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCallbackOnSet (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 1980 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCancelCallback (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 2008 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetNextToken (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 2030 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
GUID *

LibPcdGetNextTokenSpace (
  const GUID *TokenSpaceGuid
  );
# 2060 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtr (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2092 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrS (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2126 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtrAndSize (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2161 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrAndSizeS (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );

typedef enum {
  PCD_TYPE_8,
  PCD_TYPE_16,
  PCD_TYPE_32,
  PCD_TYPE_64,
  PCD_TYPE_BOOL,
  PCD_TYPE_PTR
} PCD_TYPE;

typedef struct {




  PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} PCD_INFO;
# 2213 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfo (
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2233 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfoEx (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2248 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSku (
  void
  );
# 18 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2-platforms/Platform/RaspberryPi/workspace/Build/RPi3/DEBUG_GCC5/AARCH64/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiMdePkgTokenSpaceGuid;


extern UINT64 _gPcd_SkuId_Array[];



extern const UINT32 _gPcd_FixedAtBuild_PcdSpinLockTimeout;
# 32 "<command-line>" 2
# 1 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
# 10 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
.text
.align 3

.global InternalSyncCompareExchange16 ; .type InternalSyncCompareExchange16, %function
.global InternalSyncCompareExchange32 ; .type InternalSyncCompareExchange32, %function
.global InternalSyncCompareExchange64 ; .type InternalSyncCompareExchange64, %function
.global InternalSyncIncrement ; .type InternalSyncIncrement, %function
.global InternalSyncDecrement ; .type InternalSyncDecrement, %function
# 43 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
InternalSyncCompareExchange16:
  uxth w1, w1
  uxth w2, w2
  dmb sy

InternalSyncCompareExchange16Again:
  ldxrh w3, [x0]
  cmp w3, w1
  bne InternalSyncCompareExchange16Fail

InternalSyncCompareExchange16Exchange:
  stxrh w4, w2, [x0]
  cbnz w4, InternalSyncCompareExchange16Again

InternalSyncCompareExchange16Fail:
  dmb sy
  mov w0, w3
  ret
# 86 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
InternalSyncCompareExchange32:
  dmb sy

InternalSyncCompareExchange32Again:
  ldxr w3, [x0]
  cmp w3, w1
  bne InternalSyncCompareExchange32Fail

InternalSyncCompareExchange32Exchange:
  stxr w4, w2, [x0]
  cbnz w4, InternalSyncCompareExchange32Again

InternalSyncCompareExchange32Fail:
  dmb sy
  mov w0, w3
  ret
# 126 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
InternalSyncCompareExchange64:
  dmb sy

InternalSyncCompareExchange64Again:
  ldxr x3, [x0]
  cmp x3, x1
  bne InternalSyncCompareExchange64Fail

InternalSyncCompareExchange64Exchange:
  stxr w4, x2, [x0]
  cbnz w4, InternalSyncCompareExchange64Again

InternalSyncCompareExchange64Fail:
  dmb sy
  mov x0, x3
  ret
# 161 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
InternalSyncIncrement:
  dmb sy
TryInternalSyncIncrement:
  ldxr w1, [x0]
  add w1, w1, #1
  stxr w2, w1, [x0]
  cbnz w2, TryInternalSyncIncrement
  mov w0, w1
  dmb sy
  ret
# 190 "/media/hwdk/WDATA/Helloworld_Dk_Things/UEFIPROG/EDKHOME/edk2/MdePkg/Library/BaseSynchronizationLib/AArch64/Synchronization.S"
InternalSyncDecrement:
  dmb sy
TryInternalSyncDecrement:
  ldxr w1, [x0]
  sub w1, w1, #1
  stxr w2, w1, [x0]
  cbnz w2, TryInternalSyncDecrement
  mov w0, w1
  dmb sy
  ret