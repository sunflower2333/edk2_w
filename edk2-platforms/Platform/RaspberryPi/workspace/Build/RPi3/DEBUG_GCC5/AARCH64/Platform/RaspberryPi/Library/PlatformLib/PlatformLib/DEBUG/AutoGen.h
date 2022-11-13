/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_050182ef_f708_4148_b4bc_256cabf74fea
#define _AUTOGENH_050182ef_f708_4148_b4bc_256cabf74fea

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gArmPlatformTokenSpaceGuid;
extern GUID gBcm27xxTokenSpaceGuid;
extern GUID gBcm283xTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;
extern GUID gRaspberryPiTokenSpaceGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

// PPIs
extern GUID gArmMpCoreInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFdBaseAddress  47U
extern const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdBaseAddress 0x00000000
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _PCD_SIZE_PcdFdBaseAddress
#define _PCD_TOKEN_PcdFvBaseAddress  49U
extern const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvBaseAddress 0x00030000
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _PCD_SIZE_PcdFvBaseAddress
#define _PCD_TOKEN_PcdCoreCount  35U
extern const UINT32 _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCoreCount 4
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount _PCD_SIZE_PcdCoreCount
#define _PCD_TOKEN_PcdArmPrimaryCoreMask  44U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCoreMask 0xF03
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask _PCD_SIZE_PcdArmPrimaryCoreMask
#define _PCD_TOKEN_PcdArmPrimaryCore  43U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCore 0
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore _PCD_SIZE_PcdArmPrimaryCore
#define _PCD_TOKEN_PcdFdSize  48U
extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdSize 0x00200000
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize _PCD_SIZE_PcdFdSize
#define _PCD_TOKEN_PcdBcm27xxRegistersAddress  54U
extern const UINT32 _gPcd_FixedAtBuild_PcdBcm27xxRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm27xxRegistersAddress  _gPcd_FixedAtBuild_PcdBcm27xxRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm27xxRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm27xxRegistersAddress 0x0
#define _PCD_SIZE_PcdBcm27xxRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm27xxRegistersAddress _PCD_SIZE_PcdBcm27xxRegistersAddress
#define _PCD_TOKEN_PcdBcm283xRegistersAddress  55U
extern const UINT32 _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm283xRegistersAddress  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm283xRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBcm283xRegistersAddress 0x3f000000
#define _PCD_SIZE_PcdBcm283xRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm283xRegistersAddress _PCD_SIZE_PcdBcm283xRegistersAddress
#define _PCD_TOKEN_PcdDmaDeviceOffset  211U
extern const UINT64 _gPcd_FixedAtBuild_PcdDmaDeviceOffset;
#define _PCD_GET_MODE_64_PcdDmaDeviceOffset  _gPcd_FixedAtBuild_PcdDmaDeviceOffset
//#define _PCD_SET_MODE_64_PcdDmaDeviceOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDmaDeviceOffset 0xc0000000
#define _PCD_SIZE_PcdDmaDeviceOffset 8
#define _PCD_GET_MODE_SIZE_PcdDmaDeviceOffset _PCD_SIZE_PcdDmaDeviceOffset
#define _PCD_TOKEN_PcdSystemMemoryBase  51U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryBase 0x00400000
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _PCD_SIZE_PcdSystemMemoryBase
#define _PCD_TOKEN_PcdSystemMemorySize  52U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemorySize 0x3FC00000
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize _PCD_SIZE_PcdSystemMemorySize
#define _PCD_TOKEN_PcdExtendedMemoryBase  227U
extern const UINT32 _gPcd_FixedAtBuild_PcdExtendedMemoryBase;
#define _PCD_GET_MODE_32_PcdExtendedMemoryBase  _gPcd_FixedAtBuild_PcdExtendedMemoryBase
//#define _PCD_SET_MODE_32_PcdExtendedMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdExtendedMemoryBase 0x0
#define _PCD_SIZE_PcdExtendedMemoryBase 4
#define _PCD_GET_MODE_SIZE_PcdExtendedMemoryBase _PCD_SIZE_PcdExtendedMemoryBase
#define _PCD_TOKEN_PcdNvStorageEventLogSize  231U
extern const UINT32 _gPcd_FixedAtBuild_PcdNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdNvStorageEventLogSize 0x00001000
#define _PCD_SIZE_PcdNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdNvStorageEventLogSize _PCD_SIZE_PcdNvStorageEventLogSize
#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  96U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableSize 0x0000E000
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize _PCD_SIZE_PcdFlashNvStorageVariableSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  94U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize 0x00001000
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  92U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize 0x00010000
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize _PCD_SIZE_PcdFlashNvStorageFtwSpareSize
#define _PCD_TOKEN_PcdAcpiBasicMode  226U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdAcpiBasicMode;
#define _PCD_GET_MODE_BOOL_PcdAcpiBasicMode  _gPcd_FixedAtBuild_PcdAcpiBasicMode
//#define _PCD_SET_MODE_BOOL_PcdAcpiBasicMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
