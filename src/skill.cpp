#include "skill.hpp"

int Skill::getInfluenceOnIntalligence() {
    return intalligenceBonus;
}
void Skill::setInfluenceOnIntelligence(int bonus)
{
    Skill::intalligenceBonus = bonus;
}

bool Skill::operator<(const Skill &skill) const {
    return intalligenceBonus < skill.intalligenceBonus;
}
