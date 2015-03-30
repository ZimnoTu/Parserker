#pragma once

#include <string>

class Shield
{
public:
    Shield();
    Shield(int defence, double mass, std::string name);
    Shield(int defence, double mass);
    double getMass();
    int getDefenceBonus();

private:
    int defenceBonus;
    double mass;
    std::string name;
};