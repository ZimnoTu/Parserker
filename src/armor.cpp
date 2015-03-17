#include "armor.hpp"

Armor::Armor(double mass, unsigned int defence)
{
    Armor::mass = mass;
    Armor::defence = defence;
}

unsigned int Armor::getDefence() {
    return defence;
}
double Armor::getMass() {
    return mass;
}