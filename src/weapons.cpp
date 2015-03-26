#include "weapons.hpp"

Weapon::Weapon(std::string name, int strBonus, double mass)
{
    Weapon::name = name;
    Weapon::strengthBonus = strBonus;
    Weapon::mass = mass;
}
double Weapon::getMass()
{
    return mass;
}
int Weapon::getStrengthBonus()
{
    return strengthBonus;
}

Weapon::Weapon()
{
    name = "defult";
    strengthBonus = 0;
    mass = 0;
}
