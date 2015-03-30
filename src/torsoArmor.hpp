#pragma  once

#include <string>

class TorsoArmor
{
public:
    TorsoArmor();
    TorsoArmor(int defence, double mass, std::string name);
    TorsoArmor(int defence, double mass);
    double getMass();
    int getDefenceBonus();

private:
    int defenceBonus;
    double mass;
    std::string name;


};