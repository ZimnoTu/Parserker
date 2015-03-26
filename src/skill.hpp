#pragma once
#include <string>
#include <vector>
#include "parserker.hpp"

class Parserker;
class Statistics;

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
    void applyBonuses(Statistics &statistics);
    std::string getName() const;
    bool operator<(const Skill &skill) const;
    bool operator==(const Skill &skill) const;

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