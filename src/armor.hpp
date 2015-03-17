#pragma once

class Armor
{
public:
    Armor(double mass, unsigned int defence);
    double getMass();
    unsigned int getDefence();

private:
    double mass;
    unsigned int defence;
};