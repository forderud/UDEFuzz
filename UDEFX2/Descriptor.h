#pragma once

#include "Descriptors/Default.h"
#include "Descriptors/KingstonFlash.h"
#include "Descriptors/Flash20.h"

// this file need just to include all descriptor headers in one place and
// also create aliases for indexes in DESCRIPTOR_POOL

#define DEFAULT_DESCRIPTOR_SET 0
#define KINGSTON_DESCRIPTOR_SET 1
#define FLASH_20_DESCRIPTOR_SET 2

DESCRIPTOR_POOL GetDescriptorPool();