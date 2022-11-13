/** @file
 *
 *  [DSDT] SD controller/card definition (SDHC)
 *
 *  Copyright (c) 2018, Andrey Warkentin <andrey.warkentin@gmail.com>
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *
 *  SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 **/

//
// Note: UEFI can use either SDHost or Arasan. We expose both to the OS.
//

// ArasanSD 3.0 SD Host Controller.
Device (SDC1)
{
  Name (_HID, "BCM2847")
  Name (_CID, "ARASAN")
  Name (_UID, 0x0)
  Name (_CCA, 0x0)
  Name (_S1D, 0x1)
  Name (_S2D, 0x1)
  Name (_S3D, 0x1)
  Name (_S4D, 0x1)
  Method (_STA)
  {
    Return(0xf)
  }
  Method (_CRS, 0x0, Serialized)
  {
    Name (RBUF, ResourceTemplate ()
    {
      MEMORY32FIXED (ReadWrite, 0xFE300000, 0x100,)
      Interrupt (ResourceConsumer, Level, ActiveHigh, Exclusive) { 0x9E }
    })
    Return (RBUF)
  }

  //
  // A child device that represents the
  // sd card, which is marked as non-removable.
  //
  Device (SDMM)
  {
    Method (_ADR)
    {
      Return (0)
    }
    Method (_RMV) // Is removable
    {
      Return (0) // 0 - fixed
    }
  }
}


// Broadcom SDHost 2.0 SD Host Controller
Device (SDC2)
{
  Name (_HID, "BCM2855")
  Name (_CID, "SDHST")
  Name (_UID, 0x0)
  Name (_CCA, 0x0)
  Name (_S1D, 0x1)
  Name (_S2D, 0x1)
  Name (_S3D, 0x1)
  Name (_S4D, 0x1)
  Method (_STA)
  {
    Return (0xf)
  }
  Method (_CRS, 0x0, Serialized)
  {
    Name (RBUF, ResourceTemplate ()
    {
      MEMORY32FIXED (ReadWrite, 0xFE202000, 0x100,)
      Interrupt (ResourceConsumer, Level, ActiveHigh, Exclusive) { 0x98 }
    })
    Return (RBUF)
  }

  //
  // A child device that represents the
  // sd card, which is marked as non-removable.
  //
  Device (SDMM)
  {
    Method (_ADR)
    {
      Return (0)
    }
    Method (_RMV) // Is removable
    {
      Return (0) // 0 - fixed
    }
  }
}
