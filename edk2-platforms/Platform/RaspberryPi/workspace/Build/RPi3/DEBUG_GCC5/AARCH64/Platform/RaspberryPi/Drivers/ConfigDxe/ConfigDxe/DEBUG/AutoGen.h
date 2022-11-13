/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_755cbac2_b23f_4b92_bc8e_fb01ce5907b7
#define _AUTOGENH_755cbac2_b23f_4b92_bc8e_fb01ce5907b7

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x755cbac2, 0xb23f, 0x4b92, {0xbc, 0x8e, 0xfb, 0x01, 0xce, 0x59, 0x07, 0xb7}}

// Guids
extern EFI_GUID gConfigDxeFormSetGuid;
extern EFI_GUID gBcm283xTokenSpaceGuid;
extern EFI_GUID gRaspberryPiTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;

// Protocols
extern EFI_GUID gRaspberryPiFirmwareProtocolGuid;
extern EFI_GUID gRaspberryPiConfigAppliedProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdBcm283xRegistersAddress  55U
#define _PCD_SIZE_PcdBcm283xRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm283xRegistersAddress  _PCD_SIZE_PcdBcm283xRegistersAddress 
#define _PCD_VALUE_PcdBcm283xRegistersAddress  0x3f000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm283xRegistersAddress  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm283xRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuClock  14U
#define _PCD_GET_MODE_32_PcdCpuClock  LibPcdGet32(_PCD_TOKEN_PcdCpuClock)
#define _PCD_GET_MODE_SIZE_PcdCpuClock  LibPcdGetSize(_PCD_TOKEN_PcdCpuClock)
#define _PCD_SET_MODE_32_PcdCpuClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuClock, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuClock, (Value))

#define _PCD_TOKEN_PcdCustomCpuClock  15U
#define _PCD_GET_MODE_32_PcdCustomCpuClock  LibPcdGet32(_PCD_TOKEN_PcdCustomCpuClock)
#define _PCD_GET_MODE_SIZE_PcdCustomCpuClock  LibPcdGetSize(_PCD_TOKEN_PcdCustomCpuClock)
#define _PCD_SET_MODE_32_PcdCustomCpuClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdCustomCpuClock, (Value))
#define _PCD_SET_MODE_32_S_PcdCustomCpuClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCustomCpuClock, (Value))

#define _PCD_TOKEN_PcdSdIsArasan  25U
#define _PCD_GET_MODE_32_PcdSdIsArasan  LibPcdGet32(_PCD_TOKEN_PcdSdIsArasan)
#define _PCD_GET_MODE_SIZE_PcdSdIsArasan  LibPcdGetSize(_PCD_TOKEN_PcdSdIsArasan)
#define _PCD_SET_MODE_32_PcdSdIsArasan(Value)  LibPcdSet32(_PCD_TOKEN_PcdSdIsArasan, (Value))
#define _PCD_SET_MODE_32_S_PcdSdIsArasan(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSdIsArasan, (Value))

#define _PCD_TOKEN_PcdMmcForce1Bit  21U
#define _PCD_GET_MODE_32_PcdMmcForce1Bit  LibPcdGet32(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_GET_MODE_SIZE_PcdMmcForce1Bit  LibPcdGetSize(_PCD_TOKEN_PcdMmcForce1Bit)
#define _PCD_SET_MODE_32_PcdMmcForce1Bit(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForce1Bit, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForce1Bit(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForce1Bit, (Value))

#define _PCD_TOKEN_PcdMmcForceDefaultSpeed  22U
#define _PCD_GET_MODE_32_PcdMmcForceDefaultSpeed  LibPcdGet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_GET_MODE_SIZE_PcdMmcForceDefaultSpeed  LibPcdGetSize(_PCD_TOKEN_PcdMmcForceDefaultSpeed)
#define _PCD_SET_MODE_32_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcForceDefaultSpeed(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcForceDefaultSpeed, (Value))

#define _PCD_TOKEN_PcdMmcSdDefaultSpeedMHz  23U
#define _PCD_GET_MODE_32_PcdMmcSdDefaultSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdDefaultSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdDefaultSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdDefaultSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcSdHighSpeedMHz  24U
#define _PCD_GET_MODE_32_PcdMmcSdHighSpeedMHz  LibPcdGet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_GET_MODE_SIZE_PcdMmcSdHighSpeedMHz  LibPcdGetSize(_PCD_TOKEN_PcdMmcSdHighSpeedMHz)
#define _PCD_SET_MODE_32_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcSdHighSpeedMHz(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcSdHighSpeedMHz, (Value))

#define _PCD_TOKEN_PcdMmcDisableMulti  20U
#define _PCD_GET_MODE_32_PcdMmcDisableMulti  LibPcdGet32(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_GET_MODE_SIZE_PcdMmcDisableMulti  LibPcdGetSize(_PCD_TOKEN_PcdMmcDisableMulti)
#define _PCD_SET_MODE_32_PcdMmcDisableMulti(Value)  LibPcdSet32(_PCD_TOKEN_PcdMmcDisableMulti, (Value))
#define _PCD_SET_MODE_32_S_PcdMmcDisableMulti(Value)  LibPcdSet32S(_PCD_TOKEN_PcdMmcDisableMulti, (Value))

#define _PCD_TOKEN_PcdDebugEnableJTAG  16U
#define _PCD_GET_MODE_32_PcdDebugEnableJTAG  LibPcdGet32(_PCD_TOKEN_PcdDebugEnableJTAG)
#define _PCD_GET_MODE_SIZE_PcdDebugEnableJTAG  LibPcdGetSize(_PCD_TOKEN_PcdDebugEnableJTAG)
#define _PCD_SET_MODE_32_PcdDebugEnableJTAG(Value)  LibPcdSet32(_PCD_TOKEN_PcdDebugEnableJTAG, (Value))
#define _PCD_SET_MODE_32_S_PcdDebugEnableJTAG(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDebugEnableJTAG, (Value))

#define _PCD_TOKEN_PcdDebugShowUEFIExit  17U
#define _PCD_GET_MODE_32_PcdDebugShowUEFIExit  LibPcdGet32(_PCD_TOKEN_PcdDebugShowUEFIExit)
#define _PCD_GET_MODE_SIZE_PcdDebugShowUEFIExit  LibPcdGetSize(_PCD_TOKEN_PcdDebugShowUEFIExit)
#define _PCD_SET_MODE_32_PcdDebugShowUEFIExit(Value)  LibPcdSet32(_PCD_TOKEN_PcdDebugShowUEFIExit, (Value))
#define _PCD_SET_MODE_32_S_PcdDebugShowUEFIExit(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDebugShowUEFIExit, (Value))

#define _PCD_TOKEN_PcdDisplayEnableScaledVModes  19U
#define _PCD_GET_MODE_8_PcdDisplayEnableScaledVModes  LibPcdGet8(_PCD_TOKEN_PcdDisplayEnableScaledVModes)
#define _PCD_GET_MODE_SIZE_PcdDisplayEnableScaledVModes  LibPcdGetSize(_PCD_TOKEN_PcdDisplayEnableScaledVModes)
#define _PCD_SET_MODE_8_PcdDisplayEnableScaledVModes(Value)  LibPcdSet8(_PCD_TOKEN_PcdDisplayEnableScaledVModes, (Value))
#define _PCD_SET_MODE_8_S_PcdDisplayEnableScaledVModes(Value)  LibPcdSet8S(_PCD_TOKEN_PcdDisplayEnableScaledVModes, (Value))

#define _PCD_TOKEN_PcdDisplayEnableSShot  18U
#define _PCD_GET_MODE_32_PcdDisplayEnableSShot  LibPcdGet32(_PCD_TOKEN_PcdDisplayEnableSShot)
#define _PCD_GET_MODE_SIZE_PcdDisplayEnableSShot  LibPcdGetSize(_PCD_TOKEN_PcdDisplayEnableSShot)
#define _PCD_SET_MODE_32_PcdDisplayEnableSShot(Value)  LibPcdSet32(_PCD_TOKEN_PcdDisplayEnableSShot, (Value))
#define _PCD_SET_MODE_32_S_PcdDisplayEnableSShot(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDisplayEnableSShot, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
ConfigInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "ConfigDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
