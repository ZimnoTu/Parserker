#include "armor.hpp"

HeadArmor::HeadArmor(int defence, double mass)
{
    HeadArmor::defenceBounus = defence;
    HeadArmor::mass = mass;
    HeadArmor::name = "helmet";

    isHelemet = true;
    isTorsoArmor = false;
    isShield = false;
}
HeadArmor::HeadArmor()
{
    HeadArmor::name = "helmet";

    isHelemet = true;
    isTorsoArmor = false;
    isShield = false;
}
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
TorsoArmor::TorsoArmor(int defence, double mass)
{
    TorsoArmor::defenceBounus = defence;
    TorsoArmor::mass = mass;
    TorsoArmor::name = "breastplate";
    isHelemet = false;
    isTorsoArmor = true;
    isShield = false;
}
TorsoArmor::TorsoArmor()
{
    TorsoArmor::name = "breastplate";
    isHelemet = false;
    isTorsoArmor = true;
    isShield = false;
}
