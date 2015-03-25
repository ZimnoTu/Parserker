#pragma once
#include <string>
#include <vector>
#include "parserker.hpp"

class Parserker;

struct Bonus{
    Bonus();
    int strength;
    int armor;
    int intelligence;
    int charisma;
    int willpower;
    int endurance;
};

class Skill {
public:
    void applyBonuses(Parserker &parserker);
    std::string getName() const;
    bool operator<(const Skill &skill) const;

protected:
    std::string name;
    Bonus bonus;
};

class Reading : public Skill
{
public:
    Reading();
};

class MakeUp : public Skill
{
public:
    MakeUp();
};