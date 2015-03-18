#pragma once
#include <string>


class Skill {
public:
    void setInfluenceOnIntelligence(int bonus);
    int getInfluenceOnIntalligence();
    std::string getName() const;

    Skill(std::string name, int bonus);

    bool operator <(const Skill &skill)const;

private:
    std::string name;
    int intalligenceBonus;

};