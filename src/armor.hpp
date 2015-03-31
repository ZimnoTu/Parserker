#pragma once
#include <string>

class Armor
{
public:
    bool isHelemet;
    bool isTorsoArmor;
    bool isShield;

private:
    std::string name;
    int defenceBounus;
    double mass;
};