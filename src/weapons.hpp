#pragma once

#include <string>

class Weapon
{
public:
    Weapon(std::string name, int strBonus, double mass);
    Weapon();
    double getMass();
    int getStrengthBonus();

private:
    double mass;
    int strengthBonus;
    std::string name;
};