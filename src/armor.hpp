#pragma once
#include <string>

class Armor
{
public:
    bool isHelemet;
    bool isTorsoArmor;
    bool isShield;

    double getMass();
    int getDefenceBonus();

protected:
    std::string name;
    int defenceBounus;
    double mass;
};
class HeadArmor : public Armor
{
public:
    HeadArmor();
    HeadArmor(int defence, double mass);
};