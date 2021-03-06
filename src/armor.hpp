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
    std::string getName() {return name;}
    Armor();



protected:
    std::string name;
    int defenceBounus;
    double mass;
};

class HeadArmor : public Armor
{
public:
    HeadArmor(int defence, double mass);
};

class TorsoArmor : public Armor
{
public:
    TorsoArmor(int defence, double mass);
};

class Shield : public Armor
{
public:
    Shield(int defence, double mass);
};