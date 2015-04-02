#include "skill.hpp"

void Skill::applyBonuses(Statistics &statistics)
{
    statistics.setStrength(bonus.strength);
    statistics.setDefence(bonus.armor);
    statistics.setIntelligence(bonus.intelligence);
    statistics.setCharisma(bonus.charisma);
    statistics.setWillpower(bonus.willpower);
    statistics.setEndurance(bonus.endurance);
}

std::string Skill::getName() const {
    return name;
}

bool Skill::operator<(const Skill &skill) const
{
    return name.compare(skill.getName()) < 0;
}

bool Skill::operator==(const Skill &skill) const
{
    return name == skill.getName();
}

Reading::Reading()
{
    name = "reading";
    bonus.intelligence = 1;
}

MakeUp::MakeUp()
{
    name = "make up";
    bonus.charisma = 1;
}

Bonus::Bonus()
{
    strength = 0;
    armor = 0;
    intelligence = 0;
    charisma = 0;
    willpower = 0;
    endurance = 0;
}

