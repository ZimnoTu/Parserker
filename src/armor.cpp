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
    HeadArmor::defenceBounus = 0;
    HeadArmor::mass = 0.0;
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
