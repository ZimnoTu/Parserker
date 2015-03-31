#include "armor.hpp"

double Armor::getMass()
{
    return mass;
}
int Armor::getDefenceBonus()
{
    return defenceBounus;
}
Armor::Armor()
{
    Armor::mass = 0.0;
    Armor::defenceBounus = 0;
}

HeadArmor::HeadArmor(int defence, double mass)
{
    HeadArmor::defenceBounus = defence;
    HeadArmor::mass = mass;
    HeadArmor::name = "helmet";

    isHelemet = true;
    isTorsoArmor = false;
    isShield = false;
}

TorsoArmor::TorsoArmor(int defence, double mass)
{
    TorsoArmor::defenceBounus = defence;
    TorsoArmor::mass = mass;
    TorsoArmor::name = "breastplate";
    isHelemet = false;
    isTorsoArmor = true;
    isShield = false;
}

Shield::Shield(int defence, double mass)
{
    Shield::defenceBounus = defence;
    Shield::mass = mass;
    Shield::name = "shield";
    isHelemet = false;
    isTorsoArmor = false;
    isShield = true;
}

