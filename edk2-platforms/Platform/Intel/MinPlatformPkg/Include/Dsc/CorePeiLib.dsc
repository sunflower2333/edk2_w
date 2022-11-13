## @file
#  Platform description.
#
# Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

  #
  # Generic EDKII Lib
  #
  
  #
  # PEI phase common
  #
  
[LibraryClasses.common.SEC,LibraryClasses.common.PEI_CORE,LibraryClasses.common.PEIM]
  S3BootScriptLib|MdePkg/Library/BaseS3BootScriptLibNull/BaseS3BootScriptLibNull.inf
  PcdLib|MdePkg/Library/PeiPcdLib/PeiPcdLib.inf
  HobLib|MdePkg/Library/PeiHobLib/PeiHobLib.inf
  MemoryAllocationLib|MdePkg/Library/PeiMemoryAllocationLib/PeiMemoryAllocationLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/PeiReportStatusCodeLib/PeiReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/PeiExtractGuidedSectionLib/PeiExtractGuidedSectionLib.inf
  LockBoxLib|MdeModulePkg/Library/SmmLockBoxLib/SmmLockBoxPeiLib.inf
  CpuExceptionHandlerLib|UefiCpuPkg/Library/CpuExceptionHandlerLib/SecPeiCpuExceptionHandlerLib.inf


!if gMinPlatformPkgTokenSpaceGuid.PcdPerformanceEnable == TRUE
  PerformanceLib|MdeModulePkg/Library/PeiPerformanceLib/PeiPerformanceLib.inf
!endif

  TimerLib|PcAtChipsetPkg/Library/AcpiTimerLib/BaseAcpiTimerLib.inf

[LibraryClasses.common.SEC]
  ReportStatusCodeLib|MdePkg/Library/BaseReportStatusCodeLibNull/BaseReportStatusCodeLibNull.inf
  CpuExceptionHandlerLib|UefiCpuPkg/Library/CpuExceptionHandlerLib/SecPeiCpuExceptionHandlerLib.inf
!if $(TARGET) == DEBUG
  DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf

[LibraryClasses.common.PEI_CORE]
  TimerLib|PcAtChipsetPkg/Library/AcpiTimerLib/PeiAcpiTimerLib.inf
  CpuExceptionHandlerLib|UefiCpuPkg/Library/CpuExceptionHandlerLib/SecPeiCpuExceptionHandlerLib.inf
!if $(TARGET) == DEBUG
  DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif

!if gMinPlatformPkgTokenSpaceGuid.PcdPerformanceEnable == TRUE
  PerformanceLib|MdeModulePkg/Library/PeiPerformanceLib/PeiPerformanceLib.inf
!endif
  
[LibraryClasses.common.PEIM]
  CpuExceptionHandlerLib|UefiCpuPkg/Library/CpuExceptionHandlerLib/SecPeiCpuExceptionHandlerLib.inf
  TimerLib|PcAtChipsetPkg/Library/AcpiTimerLib/PeiAcpiTimerLib.inf

  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/PeiCryptLib.inf

  Tpm2DeviceLib|SecurityPkg/Library/Tpm2DeviceLibRouter/Tpm2DeviceLibRouterPei.inf
  HashLib|SecurityPkg/Library/HashLibBaseCryptoRouter/HashLibBaseCryptoRouterPei.inf
  Tcg2PhysicalPresenceLib|SecurityPkg/Library/PeiTcg2PhysicalPresenceLib/PeiTcg2PhysicalPresenceLib.inf

!if gMinPlatformPkgTokenSpaceGuid.PcdPerformanceEnable == TRUE
  PerformanceLib|MdeModulePkg/Library/PeiPerformanceLib/PeiPerformanceLib.inf
!endif
