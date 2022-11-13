/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiDriverEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PcdDxe";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseHobGuid = { 0xEA296D92, 0x0B69, 0x423C, { 0x8C, 0x28, 0x33, 0xB4, 0xE0, 0xA9, 0x12, 0x68 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseSignatureGuid = { 0x3c7d193c, 0x682c, 0x4c14, { 0xa6, 0x8f, 0x55, 0x2d, 0xea, 0x4f, 0x43, 0x7e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmPlatformTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gBcm283xTokenSpaceGuid = {0x82f36a92, 0xfb7e, 0x43a1, {0xb9, 0x9e, 0x49, 0x13, 0x3f, 0xc7, 0xa4, 0x2e}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualDiskGuid = { 0x77AB535A, 0x45FC, 0x624B, {0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualCdGuid = { 0x3D5ABD30, 0x4175, 0x87CE, {0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualDiskGuid = { 0x5CEA02C9, 0x4D07, 0x69D3, {0x26, 0x9F ,0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualCdGuid = { 0x08018188, 0x42CD, 0xBB48, {0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi20TableGuid = { 0x8868E871, 0xE4F1, 0x11D3, { 0xBC, 0x22, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi10TableGuid = { 0xEB9D2D30, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdProtocolGuid = { 0x11B34006, 0xD85B, 0x4D0A, { 0xA2, 0x90, 0xD5, 0xA5, 0x71, 0x31, 0x0E, 0xF7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478,  0xefd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVpdBaseAddress = _PCD_VALUE_PcdVpdBaseAddress;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  182U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  163U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  160U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  164U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  151U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  166U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultReceiveFifoDepth  171U
#define _PCD_SIZE_PcdUartDefaultReceiveFifoDepth 2
#define _PCD_GET_MODE_SIZE_PcdUartDefaultReceiveFifoDepth  _PCD_SIZE_PcdUartDefaultReceiveFifoDepth 
#define _PCD_VALUE_PcdUartDefaultReceiveFifoDepth  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth = _PCD_VALUE_PcdUartDefaultReceiveFifoDepth;
extern const  UINT16  _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth;
#define _PCD_GET_MODE_16_PcdUartDefaultReceiveFifoDepth  _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth
//#define _PCD_SET_MODE_16_PcdUartDefaultReceiveFifoDepth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialBaudRate  127U
#define _PCD_SIZE_PcdSerialBaudRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialBaudRate  _PCD_SIZE_PcdSerialBaudRate 
#define _PCD_VALUE_PcdSerialBaudRate  115200U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialBaudRate = _PCD_VALUE_PcdSerialBaudRate;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialBaudRate;
#define _PCD_GET_MODE_32_PcdSerialBaudRate  _gPcd_FixedAtBuild_PcdSerialBaudRate
//#define _PCD_SET_MODE_32_PcdSerialBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartInteger  31U
#define _PCD_SIZE_PL011UartInteger 4
#define _PCD_GET_MODE_SIZE_PL011UartInteger  _PCD_SIZE_PL011UartInteger 
#define _PCD_VALUE_PL011UartInteger  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartInteger = _PCD_VALUE_PL011UartInteger;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartInteger;
#define _PCD_GET_MODE_32_PL011UartInteger  _gPcd_FixedAtBuild_PL011UartInteger
//#define _PCD_SET_MODE_32_PL011UartInteger  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartFractional  30U
#define _PCD_SIZE_PL011UartFractional 4
#define _PCD_GET_MODE_SIZE_PL011UartFractional  _PCD_SIZE_PL011UartFractional 
#define _PCD_VALUE_PL011UartFractional  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartFractional = _PCD_VALUE_PL011UartFractional;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartFractional;
#define _PCD_GET_MODE_32_PL011UartFractional  _gPcd_FixedAtBuild_PL011UartFractional
//#define _PCD_SET_MODE_32_PL011UartFractional  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartRegOffsetVariant  32U
#define _PCD_SIZE_PL011UartRegOffsetVariant 1
#define _PCD_GET_MODE_SIZE_PL011UartRegOffsetVariant  _PCD_SIZE_PL011UartRegOffsetVariant 
#define _PCD_VALUE_PL011UartRegOffsetVariant  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PL011UartRegOffsetVariant = _PCD_VALUE_PL011UartRegOffsetVariant;
extern const  UINT8  _gPcd_FixedAtBuild_PL011UartRegOffsetVariant;
#define _PCD_GET_MODE_8_PL011UartRegOffsetVariant  _gPcd_FixedAtBuild_PL011UartRegOffsetVariant
//#define _PCD_SET_MODE_8_PL011UartRegOffsetVariant  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartClkInHz  29U
#define _PCD_SIZE_PL011UartClkInHz 4
#define _PCD_GET_MODE_SIZE_PL011UartClkInHz  _PCD_SIZE_PL011UartClkInHz 
#define _PCD_VALUE_PL011UartClkInHz  48000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartClkInHz = _PCD_VALUE_PL011UartClkInHz;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartClkInHz;
#define _PCD_GET_MODE_32_PL011UartClkInHz  _gPcd_FixedAtBuild_PL011UartClkInHz
//#define _PCD_SET_MODE_32_PL011UartClkInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  153U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBcm283xRegistersAddress  55U
#define _PCD_SIZE_PcdBcm283xRegistersAddress 4
#define _PCD_GET_MODE_SIZE_PcdBcm283xRegistersAddress  _PCD_SIZE_PcdBcm283xRegistersAddress 
#define _PCD_VALUE_PcdBcm283xRegistersAddress  0x3f000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress = _PCD_VALUE_PcdBcm283xRegistersAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress;
#define _PCD_GET_MODE_32_PcdBcm283xRegistersAddress  _gPcd_FixedAtBuild_PcdBcm283xRegistersAddress
//#define _PCD_SET_MODE_32_PcdBcm283xRegistersAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultBaudRate  168U
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate  _PCD_SIZE_PcdUartDefaultBaudRate 
#define _PCD_VALUE_PcdUartDefaultBaudRate  115200ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdUartDefaultBaudRate = _PCD_VALUE_PcdUartDefaultBaudRate;
extern const  UINT64  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultDataBits  169U
#define _PCD_SIZE_PcdUartDefaultDataBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultDataBits  _PCD_SIZE_PcdUartDefaultDataBits 
#define _PCD_VALUE_PcdUartDefaultDataBits  8U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultDataBits = _PCD_VALUE_PcdUartDefaultDataBits;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultDataBits;
#define _PCD_GET_MODE_8_PcdUartDefaultDataBits  _gPcd_FixedAtBuild_PcdUartDefaultDataBits
//#define _PCD_SET_MODE_8_PcdUartDefaultDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultParity  170U
#define _PCD_SIZE_PcdUartDefaultParity 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultParity  _PCD_SIZE_PcdUartDefaultParity 
#define _PCD_VALUE_PcdUartDefaultParity  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultParity = _PCD_VALUE_PcdUartDefaultParity;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultParity;
#define _PCD_GET_MODE_8_PcdUartDefaultParity  _gPcd_FixedAtBuild_PcdUartDefaultParity
//#define _PCD_SET_MODE_8_PcdUartDefaultParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultStopBits  172U
#define _PCD_SIZE_PcdUartDefaultStopBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultStopBits  _PCD_SIZE_PcdUartDefaultStopBits 
#define _PCD_VALUE_PcdUartDefaultStopBits  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultStopBits = _PCD_VALUE_PcdUartDefaultStopBits;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultStopBits;
#define _PCD_GET_MODE_8_PcdUartDefaultStopBits  _gPcd_FixedAtBuild_PcdUartDefaultStopBits
//#define _PCD_SET_MODE_8_PcdUartDefaultStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialRegisterAccessWidth  134U
#define _PCD_SIZE_PcdSerialRegisterAccessWidth 1
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterAccessWidth  _PCD_SIZE_PcdSerialRegisterAccessWidth 
#define _PCD_VALUE_PcdSerialRegisterAccessWidth  8U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialRegisterAccessWidth = _PCD_VALUE_PcdSerialRegisterAccessWidth;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSerialRegisterAccessWidth;
#define _PCD_GET_MODE_8_PcdSerialRegisterAccessWidth  _gPcd_FixedAtBuild_PcdSerialRegisterAccessWidth
//#define _PCD_SET_MODE_8_PcdSerialRegisterAccessWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialUseMmio  137U
#define _PCD_SIZE_PcdSerialUseMmio 1
#define _PCD_GET_MODE_SIZE_PcdSerialUseMmio  _PCD_SIZE_PcdSerialUseMmio 
#define _PCD_VALUE_PcdSerialUseMmio  1U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialUseMmio = _PCD_VALUE_PcdSerialUseMmio;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialUseMmio;
#define _PCD_GET_MODE_BOOL_PcdSerialUseMmio  _gPcd_FixedAtBuild_PcdSerialUseMmio
//#define _PCD_SET_MODE_BOOL_PcdSerialUseMmio  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialUseHardwareFlowControl  136U
#define _PCD_SIZE_PcdSerialUseHardwareFlowControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialUseHardwareFlowControl  _PCD_SIZE_PcdSerialUseHardwareFlowControl 
#define _PCD_VALUE_PcdSerialUseHardwareFlowControl  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl = _PCD_VALUE_PcdSerialUseHardwareFlowControl;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl;
#define _PCD_GET_MODE_BOOL_PcdSerialUseHardwareFlowControl  _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl
//#define _PCD_SET_MODE_BOOL_PcdSerialUseHardwareFlowControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialDetectCable  129U
#define _PCD_SIZE_PcdSerialDetectCable 1
#define _PCD_GET_MODE_SIZE_PcdSerialDetectCable  _PCD_SIZE_PcdSerialDetectCable 
#define _PCD_VALUE_PcdSerialDetectCable  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialDetectCable = _PCD_VALUE_PcdSerialDetectCable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialDetectCable;
#define _PCD_GET_MODE_BOOL_PcdSerialDetectCable  _gPcd_FixedAtBuild_PcdSerialDetectCable
//#define _PCD_SET_MODE_BOOL_PcdSerialDetectCable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialLineControl  132U
#define _PCD_SIZE_PcdSerialLineControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialLineControl  _PCD_SIZE_PcdSerialLineControl 
#define _PCD_VALUE_PcdSerialLineControl  0x03U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialLineControl = _PCD_VALUE_PcdSerialLineControl;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSerialLineControl;
#define _PCD_GET_MODE_8_PcdSerialLineControl  _gPcd_FixedAtBuild_PcdSerialLineControl
//#define _PCD_SET_MODE_8_PcdSerialLineControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialFifoControl  131U
#define _PCD_SIZE_PcdSerialFifoControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialFifoControl  _PCD_SIZE_PcdSerialFifoControl 
#define _PCD_VALUE_PcdSerialFifoControl  0x27U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialFifoControl = _PCD_VALUE_PcdSerialFifoControl;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSerialFifoControl;
#define _PCD_GET_MODE_8_PcdSerialFifoControl  _gPcd_FixedAtBuild_PcdSerialFifoControl
//#define _PCD_SET_MODE_8_PcdSerialFifoControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialClockRate  128U
#define _PCD_SIZE_PcdSerialClockRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialClockRate  _PCD_SIZE_PcdSerialClockRate 
#define _PCD_VALUE_PcdSerialClockRate  500000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialClockRate = _PCD_VALUE_PcdSerialClockRate;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialClockRate;
#define _PCD_GET_MODE_32_PcdSerialClockRate  _gPcd_FixedAtBuild_PcdSerialClockRate
//#define _PCD_SET_MODE_32_PcdSerialClockRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialPciDeviceInfo  133U
#define _PCD_VALUE_PcdSerialPciDeviceInfo  (VOID *)_gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialPciDeviceInfo[1] = {0xFF};
extern const UINT8 _gPcd_FixedAtBuild_PcdSerialPciDeviceInfo[1];
#define _PCD_GET_MODE_PTR_PcdSerialPciDeviceInfo  (VOID *)_gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
#define _PCD_SIZE_PcdSerialPciDeviceInfo 1
#define _PCD_GET_MODE_SIZE_PcdSerialPciDeviceInfo  _PCD_SIZE_PcdSerialPciDeviceInfo 
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdSerialPciDeviceInfo = 1;
//#define _PCD_SET_MODE_PTR_PcdSerialPciDeviceInfo  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialExtendedTxFifoSize  130U
#define _PCD_SIZE_PcdSerialExtendedTxFifoSize 4
#define _PCD_GET_MODE_SIZE_PcdSerialExtendedTxFifoSize  _PCD_SIZE_PcdSerialExtendedTxFifoSize 
#define _PCD_VALUE_PcdSerialExtendedTxFifoSize  8U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize = _PCD_VALUE_PcdSerialExtendedTxFifoSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize;
#define _PCD_GET_MODE_32_PcdSerialExtendedTxFifoSize  _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize
//#define _PCD_SET_MODE_32_PcdSerialExtendedTxFifoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialRegisterStride  135U
#define _PCD_SIZE_PcdSerialRegisterStride 4
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterStride  _PCD_SIZE_PcdSerialRegisterStride 
#define _PCD_VALUE_PcdSerialRegisterStride  4U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialRegisterStride = _PCD_VALUE_PcdSerialRegisterStride;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialRegisterStride;
#define _PCD_GET_MODE_32_PcdSerialRegisterStride  _gPcd_FixedAtBuild_PcdSerialRegisterStride
//#define _PCD_SET_MODE_32_PcdSerialRegisterStride  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  152U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  154U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  158U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  161U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  157U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  150U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  156U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  149U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  180U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  174U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
//SKUID: DEFAULT
//
// External PCD database debug information
//
#if 0
DXE_PCD_DATABASE_INIT gDXEPcdDbInit = {
  /* SkuIdTable */
  { 1, 0U,  },


  { 640U }, /*  PcdSetupVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */
  { 480U }, /*  PcdSetupVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */

  80U, /* PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */
  25U, /* PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */
  80U, /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */
  25U, /* PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */
  0U, /* PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  600U, /* PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  1U, /* PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  25U, /* PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  50U, /* PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */
  0U, /* PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */

  /* VPD */

  /* ExMapTable */
  {
    { 0x00030005U, 26U, 3U },
    { 0x00030004U, 27U, 3U },
    { 0x00030006U, 28U, 3U },

  },
  /* LocalTokenNumberTable */
  {
    offsetof(DXE_PCD_DATABASE, Init.PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageFtwSpareBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageFtwWorkingBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageVariableBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdTestKeyUsed_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_HII,
    offsetof(DXE_PCD_DATABASE, Init.PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT8,
    offsetof(DXE_PCD_DATABASE, Init.PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32,
    offsetof(DXE_PCD_DATABASE, Init.PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA,
    offsetof(DXE_PCD_DATABASE, Uninit.PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,

  },
  /* GuidTable */
  {
    {0xCD7CC258, 0x31DB, 0x11E6, {0x9F, 0xD3, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}},
    { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }},
    {0xCD7CC258, 0x31DB, 0x22E6, {0x9F, 0x22, 0x63, 0xB0, 0xB8, 0xEE, 0xD6, 0xB5}},
    { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }},

  },
  { 448U }, /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */

  /* PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 0U, offsetof(DXE_PCD_DATABASE, Init.PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 0U, 0x0U },
    { 0U, 0U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },
  /* PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 16U, offsetof(DXE_PCD_DATABASE, Init.PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 0U, 0x0U },
    { 0U, 16U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },
  /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 0U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 0U, 0x0U },
    { 0U, 0U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },
  /* PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 16U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 0U, 0x0U },
    { 0U, 16U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },
  /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1] */
  {
    { 26U, offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2), 1U, 0x0U },
    { 1U, 26U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2) }

  },
  /* PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 42U, offsetof(DXE_PCD_DATABASE, Init.PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 42U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 60U, offsetof(DXE_PCD_DATABASE, Init.PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 60U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 90U, offsetof(DXE_PCD_DATABASE, Init.PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 90U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 122U, offsetof(DXE_PCD_DATABASE, Init.PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 122U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 158U, offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 158U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 196U, offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 196U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 248U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 248U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 280U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 280U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 306U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 306U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 348U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 348U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 390U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 390U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },
  /* PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header[1] */
  {
    { 426U, offsetof(DXE_PCD_DATABASE, Init.PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2), 2U, 0x0U },
    { 2U, 426U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2) }

  },

/* SkuHead */
  {
   offsetof (DXE_PCD_DATABASE, Init.PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageFtwSpareBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageFtwWorkingBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdFlashNvStorageVariableBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdTestKeyUsed_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_HII, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT8, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Uninit.PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (DXE_PCD_DATABASE, Uninit.SkuHead)  /* */
  
  },
 /* StringTable */
  {0x43,0x00,0x6f,0x00,0x6c,0x00,0x75,0x00,0x6d,0x00,0x6e,0x00,0x73,0x00,0x00,0x00}, /* PcdConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  {0x52,0x00,0x6f,0x00,0x77,0x00,0x73,0x00,0x00,0x00}, /* PcdConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  {0x54,0x00,0x69,0x00,0x6d,0x00,0x65,0x00,0x6f,0x00,0x75,0x00,0x74,0x00,0x00,0x00}, /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10 */
  {0x43,0x00,0x70,0x00,0x75,0x00,0x43,0x00,0x6c,0x00,0x6f,0x00,0x63,0x00,0x6b,0x00,0x00,0x00}, /* PcdCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x43,0x00,0x75,0x00,0x73,0x00,0x74,0x00,0x6f,0x00,0x6d,0x00,0x43,0x00,0x70,0x00,0x75,0x00,0x43,0x00,0x6c,0x00,0x6f,0x00,0x63,0x00,0x6b,0x00,0x00,0x00}, /* PcdCustomCpuClock_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x44,0x00,0x65,0x00,0x62,0x00,0x75,0x00,0x67,0x00,0x45,0x00,0x6e,0x00,0x61,0x00,0x62,0x00,0x6c,0x00,0x65,0x00,0x4a,0x00,0x54,0x00,0x41,0x00,0x47,0x00,0x00,0x00}, /* PcdDebugEnableJTAG_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x44,0x00,0x65,0x00,0x62,0x00,0x75,0x00,0x67,0x00,0x53,0x00,0x68,0x00,0x6f,0x00,0x77,0x00,0x55,0x00,0x45,0x00,0x46,0x00,0x49,0x00,0x45,0x00,0x78,0x00,0x69,0x00,0x74,0x00,0x00,0x00}, /* PcdDebugShowUEFIExit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x44,0x00,0x69,0x00,0x73,0x00,0x70,0x00,0x6c,0x00,0x61,0x00,0x79,0x00,0x45,0x00,0x6e,0x00,0x61,0x00,0x62,0x00,0x6c,0x00,0x65,0x00,0x53,0x00,0x53,0x00,0x68,0x00,0x6f,0x00,0x74,0x00,0x00,0x00}, /* PcdDisplayEnableSShot_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x44,0x00,0x69,0x00,0x73,0x00,0x70,0x00,0x6c,0x00,0x61,0x00,0x79,0x00,0x45,0x00,0x6e,0x00,0x61,0x00,0x62,0x00,0x6c,0x00,0x65,0x00,0x53,0x00,0x63,0x00,0x61,0x00,0x6c,0x00,0x65,0x00,0x64,0x00,0x56,0x00,0x4d,0x00,0x6f,0x00,0x64,0x00,0x65,0x00,0x73,0x00,0x00,0x00}, /* PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x4d,0x00,0x6d,0x00,0x63,0x00,0x44,0x00,0x69,0x00,0x73,0x00,0x61,0x00,0x62,0x00,0x6c,0x00,0x65,0x00,0x4d,0x00,0x75,0x00,0x6c,0x00,0x74,0x00,0x69,0x00,0x00,0x00}, /* PcdMmcDisableMulti_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x4d,0x00,0x6d,0x00,0x63,0x00,0x46,0x00,0x6f,0x00,0x72,0x00,0x63,0x00,0x65,0x00,0x31,0x00,0x42,0x00,0x69,0x00,0x74,0x00,0x00,0x00}, /* PcdMmcForce1Bit_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x4d,0x00,0x6d,0x00,0x63,0x00,0x46,0x00,0x6f,0x00,0x72,0x00,0x63,0x00,0x65,0x00,0x44,0x00,0x65,0x00,0x66,0x00,0x61,0x00,0x75,0x00,0x6c,0x00,0x74,0x00,0x53,0x00,0x70,0x00,0x65,0x00,0x65,0x00,0x64,0x00,0x00,0x00}, /* PcdMmcForceDefaultSpeed_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x4d,0x00,0x6d,0x00,0x63,0x00,0x53,0x00,0x64,0x00,0x44,0x00,0x65,0x00,0x66,0x00,0x61,0x00,0x75,0x00,0x6c,0x00,0x74,0x00,0x53,0x00,0x70,0x00,0x65,0x00,0x65,0x00,0x64,0x00,0x4d,0x00,0x48,0x00,0x7a,0x00,0x00,0x00}, /* PcdMmcSdDefaultSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x4d,0x00,0x6d,0x00,0x63,0x00,0x53,0x00,0x64,0x00,0x48,0x00,0x69,0x00,0x67,0x00,0x68,0x00,0x53,0x00,0x70,0x00,0x65,0x00,0x65,0x00,0x64,0x00,0x4d,0x00,0x48,0x00,0x7a,0x00,0x00,0x00}, /* PcdMmcSdHighSpeedMHz_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x53,0x00,0x64,0x00,0x49,0x00,0x73,0x00,0x41,0x00,0x72,0x00,0x61,0x00,0x73,0x00,0x61,0x00,0x6e,0x00,0x00,0x00}, /* PcdSdIsArasan_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5 */
  {0x0}, /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  /* SizeTable */
  {
    1U, ['1U'], /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  },

  5U, /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2 */


  0xffU, /* PcdDisplayEnableScaledVModes_cd7cc258_31db_11e6_9fd3_63b0b8eed6b5_VariableDefault_2 */



  0
};
#endif


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
HobLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = HobLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{

}

const UINT32 _gUefiDriverRevision = 0x00000000U;
const UINT32 _gDxeRevision = 0x00000000U;


EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )

{
  return PcdDxeInit (ImageHandle, SystemTable);
}

VOID
EFIAPI
ExitDriver (
  IN EFI_STATUS  Status
  )
{
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (gImageHandle, gST);
  }
  gBS->Exit (gImageHandle, Status, 0, NULL);
}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
