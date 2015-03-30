#include "shield.hpp"

Shield::Shield()
{
    Shield::defenceBonus = 0;
    Shield::mass = 0;
    Shield::name = "shield";
}
Shield::Shield(int defence, double mass, std::string name)
{
    Shield::defenceBonus = defence;
    Shield::mass = mass;
    Shield::name = name;
}
Shield::Shield(int defence, double mass)
{
    Shield::defenceBonus = defence;
    Shield::mass = mass;
    Shield::name = "shield";
}
double Shield::getMass()
{
    return mass;
}
int Shield::getDefenceBonus()
{
    return defenceBonus;
}
