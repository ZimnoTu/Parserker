#include "weapons.hpp"

Weapon::Weapon(double mass, int strBonus)
{
    Weapon::mass = mass;
    Weapon::strengthBonus = strBonus;
}
double Weapon::getMass()
{
    return mass;
}
int Weapon::getStrengthBonus()
{
    return strengthBonus;
}