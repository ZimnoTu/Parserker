#pragma once

#include "headArmor.hpp"
#include "torsoArmor.hpp"
#include "shield.hpp"

struct Armor
{
    HeadArmor headArmor;
    TorsoArmor torsoArmor;
    Shield shield;

    void wearArmor(HeadArmor armor);
    void wearArmor(TorsoArmor armor);
    void wearArmor(Shield armor);
};