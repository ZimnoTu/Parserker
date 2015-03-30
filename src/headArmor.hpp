#pragma once
#include <string>


class HeadArmor {
public:
    HeadArmor();
    HeadArmor(int defence, double mass, std::string name);
    HeadArmor(int defence, double mass);
    double getMass();

    std::string getName() {return name;}
    int getDefenceBonus();

private:
    int defenceBonus;
    double mass;
    std::string name;

};

