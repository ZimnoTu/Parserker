#include "skill.hpp"

int Skill::getInfluenceOnIntalligence() {
    return intalligenceBonus;
}
void Skill::setInfluenceOnIntelligence(int bonus)
{
    Skill::intalligenceBonus = bonus;
}
