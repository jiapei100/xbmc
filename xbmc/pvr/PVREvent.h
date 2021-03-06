/*
 *  Copyright (C) 2012-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

namespace PVR
{
  enum PVREvent
  {
    // PVR Manager states
    ManagerError = 0,
    ManagerStopped,
    ManagerStarting,
    ManagerStopping,
    ManagerInterrupted,
    ManagerStarted,

    // Recording events
    RecordingsInvalidated
  };
} // namespace PVR
