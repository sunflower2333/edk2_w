/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_af8fef24_afbb_472a_b8b7_13101a79703c
#define _AUTOGENH_af8fef24_afbb_472a_b8b7_13101a79703c

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmPlatformTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PL011UartClkInHz  29U
extern const UINT32 _gPcd_FixedAtBuild_PL011UartClkInHz;
#define _PCD_GET_MODE_32_PL011UartClkInHz  _gPcd_FixedAtBuild_PL011UartClkInHz
//#define _PCD_SET_MODE_32_PL011UartClkInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PL011UartClkInHz 48000000
#define _PCD_SIZE_PL011UartClkInHz 4
#define _PCD_GET_MODE_SIZE_PL011UartClkInHz _PCD_SIZE_PL011UartClkInHz


#ifdef __cplusplus
}
#endif

#endif
