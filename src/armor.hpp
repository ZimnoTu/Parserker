#pragma once

#include "headArmor.hpp"
#include "torsoArmor.hpp"

struct Armor
{
    HeadArmor headArmor;
    TorsoArmor torsoArmor;

    void wearArmor(HeadArmor armor);
    void wearArmor(TorsoArmor armor);
};