/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD
#define _AUTOGENH_7E374E25_8E01_4FEE_87F2_390C23C606CD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x7E374E25, 0x8E01, 0x4FEE, {0x87, 0xF2, 0x39, 0x0C, 0x23, 0xC6, 0x06, 0xCD}}

// Guids
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdInterruptBaseAddress  212U
#define _PCD_SIZE_PcdInterruptBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdInterruptBaseAddress  _PCD_SIZE_PcdInterruptBaseAddress 
#define _PCD_VALUE_PcdInterruptBaseAddress  0x40000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInterruptBaseAddress;
#define _PCD_GET_MODE_32_PcdInterruptBaseAddress  _gPcd_FixedAtBuild_PcdInterruptBaseAddress
//#define _PCD_SET_MODE_32_PcdInterruptBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
