#include "headArmor.hpp"

HeadArmor::HeadArmor(int defence, double mass, std::string name)
{
    HeadArmor::defenceBonus = defence;
    HeadArmor::mass = mass;
    HeadArmor::name = name;
}
HeadArmor::HeadArmor()
{
    HeadArmor::defenceBonus = 0;
    HeadArmor::mass = 0.0;
    HeadArmor::name = "helmet";
}

HeadArmor::HeadArmor(int defence, double mass)
{
    HeadArmor::defenceBonus = defence;
    HeadArmor::mass = mass;
    HeadArmor::name = "helmet";
}

double HeadArmor::getMass()
{
    return mass;
}
