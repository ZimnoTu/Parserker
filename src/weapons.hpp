#pragma once

class Weapon{
public:
    Weapon(double mass, int strBonus);
    double getMass();
    int getStrengthBonus();


private:
    double mass;
    int strengthBonus;
};