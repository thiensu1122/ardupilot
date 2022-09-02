#pragma once

#ifndef FORCE_VERSION_H_INCLUDE
#error version.h should never be included directly. You probably want to include AP_Common/AP_FWVersion.h
#endif

#include "ap_version.h"

<<<<<<< HEAD
#define THISFIRMWARE "ArduRover V4.3.0-dev"

// the following line is parsed by the autotest scripts
#define FIRMWARE_VERSION 4,3,0,FIRMWARE_VERSION_TYPE_DEV

#define FW_MAJOR 4
#define FW_MINOR 3
#define FW_PATCH 0
#define FW_TYPE FIRMWARE_VERSION_TYPE_DEV
=======
#define THISFIRMWARE "ArduRover V4.2.3"

// the following line is parsed by the autotest scripts
#define FIRMWARE_VERSION 4,2,3,FIRMWARE_VERSION_TYPE_OFFICIAL

#define FW_MAJOR 4
#define FW_MINOR 2
#define FW_PATCH 3
#define FW_TYPE FIRMWARE_VERSION_TYPE_OFFICIAL
>>>>>>> 2172cfb39ad8f0bcdcd343d74512414f7cb1f6a6

#include <AP_Common/AP_FWVersionDefine.h>
