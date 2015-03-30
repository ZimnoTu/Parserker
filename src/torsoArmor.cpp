#include "torsoArmor.hpp"

TorsoArmor::TorsoArmor()
{
    TorsoArmor::defenceBonus = 0;
    TorsoArmor::mass = 0;
    TorsoArmor::name = "breastplate";
}
TorsoArmor::TorsoArmor(int defence, double mass, std::string name)
{
    TorsoArmor::defenceBonus = defence;
    TorsoArmor::mass = mass;
    TorsoArmor::name = name;
}
TorsoArmor::TorsoArmor(int defence, double mass)
{
    TorsoArmor::defenceBonus = defence;
    TorsoArmor::mass = mass;
    TorsoArmor::name = "breastplate";
}
double TorsoArmor:: getMass()
{
    return mass;
}
int TorsoArmor:: getDefenceBonus()
{
    return defenceBonus;
}