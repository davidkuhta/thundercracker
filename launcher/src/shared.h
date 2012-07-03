/*
 * Thundercracker Launcher -- Confidential, not for redistribution.
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */

/*
 * Shared memory resources which are multiplexed between the main menu,
 * loading animations, and any built-in applets.
 */

#include <sifteo.h>
using namespace Sifteo;

namespace Shared {

    extern Sifteo::VideoBuffer video[CUBE_ALLOCATION];

    static const unsigned NUM_SLOTS = 2;
    extern Sifteo::AssetSlot primarySlot;
    extern Sifteo::AssetSlot secondarySlot;

}