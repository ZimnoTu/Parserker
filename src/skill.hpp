#pragma once
#include <string>
#include <vector>

enum class Attributes : unsigned int { strength = 0, armor = 1, intelligence,
                                    charisma, willpower, endurance};


class Skill {
public:

    //bool operator <(const Skill &skill)const;
    int getBonus(Attributes attribute);


protected:
    std::string name;
    std::vector<int>bonus;
};

class Reading : public Skill
{
public:
    Reading();

};