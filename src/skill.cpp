#include "skill.hpp"

Skill::Skill(std::string name, int bonus)
{
    Skill::name = name;
    Skill::intalligenceBonus = bonus;
}


int Skill::getInfluenceOnIntalligence() {
    return intalligenceBonus;
}
void Skill::setInfluenceOnIntelligence(int bonus)
{
    Skill::intalligenceBonus = bonus;
}

bool Skill::operator<(const Skill &skill) const
{
    return name.compare(skill.getName()) < 0;
}
std::string Skill::getName() const{
    return name;
}
