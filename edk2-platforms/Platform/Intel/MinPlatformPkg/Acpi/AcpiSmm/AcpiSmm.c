/** @file
  Acpi Smm driver.

Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "AcpiSmm.h"

/**
  Enable SCI

  @param[in] DispatchHandle       - The handle of this callback, obtained when registering
  @param[in] DispatchContext      - Pointer to the EFI_SMM_SW_DISPATCH_CONTEXT
  @param[in] CommBuffer           - A pointer to a collection of data in memory that will
                                    be conveyed from a non-SMM environment into an SMM environment.
  @param[in] CommBufferSize       - The size of the CommBuffer.
**/
EFI_STATUS
EFIAPI
EnableAcpiCallback (
  IN  EFI_HANDLE                    DispatchHandle,
  IN  CONST VOID                    *DispatchContext,
  IN  OUT VOID                      *CommBuffer  OPTIONAL,
  IN  OUT UINTN                     *CommBufferSize  OPTIONAL
  )
{
  BoardEnableAcpi (TRUE);
  return EFI_SUCCESS;
}

/**
  Disable SCI

  @param[in] DispatchHandle       - The handle of this callback, obtained when registering
  @param[in] DispatchContext      - Pointer to the EFI_SMM_SW_DISPATCH_CONTEXT
  @param[in] CommBuffer           - A pointer to a collection of data in memory that will
                                    be conveyed from a non-SMM environment into an SMM environment.
  @param[in] CommBufferSize       - The size of the CommBuffer.
**/
EFI_STATUS
EFIAPI
DisableAcpiCallback (
  IN  EFI_HANDLE                    DispatchHandle,
  IN  CONST VOID                    *DispatchContext,
  IN  OUT VOID                      *CommBuffer  OPTIONAL,
  IN  UINTN                         *CommBufferSize  OPTIONAL
  )
{
  BoardDisableAcpi (TRUE);
  return EFI_SUCCESS;
}

/**
  Initializes the Acpi Smm Driver

  @param[in] ImageHandle   - Pointer to the loaded image protocol for this driver
  @param[in] SystemTable   - Pointer to the EFI System Table

  @retval Status           - EFI_SUCCESS
  @retval Assert, otherwise.

**/
EFI_STATUS
EFIAPI
InitializeAcpiSmm (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS                                Status;
  EFI_HANDLE                                SwHandle;
  EFI_SMM_SW_DISPATCH2_PROTOCOL             *SwDispatch;
  EFI_SMM_SW_REGISTER_CONTEXT               SwContext;

  //
  // Locate the ICH SMM SW dispatch protocol
  //
  Status = gSmst->SmmLocateProtocol (&gEfiSmmSwDispatch2ProtocolGuid, NULL, (VOID**)&SwDispatch);
  ASSERT_EFI_ERROR (Status);

  //
  // Register ACPI enable SMI handler
  //
  SwContext.SwSmiInputValue = (UINTN) PcdGet8 (PcdAcpiEnableSwSmi);
  Status = SwDispatch->Register (
                         SwDispatch,
                         EnableAcpiCallback,
                         &SwContext,
                         &SwHandle
                         );
  ASSERT_EFI_ERROR (Status);

  //
  // Register ACPI disable SMI handler
  //
  SwContext.SwSmiInputValue = (UINTN) PcdGet8 (PcdAcpiDisableSwSmi);
  Status = SwDispatch->Register (
                         SwDispatch,
                         DisableAcpiCallback,
                         &SwContext,
                         &SwHandle
                         );
  ASSERT_EFI_ERROR (Status);

  return EFI_SUCCESS;
}
