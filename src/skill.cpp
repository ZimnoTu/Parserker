#include "skill.hpp"

void Skill::applyBonuses(Statistics &statistics)
{
    statistics.setStrength(statistics.getStrength() + bonus.strength);
    statistics.setArmor(statistics.getArmor() + bonus.armor);
    statistics.setIntelligence(statistics.getIntelligence() + bonus.intelligence);
    statistics.setCharisma(statistics.getCharisma() + bonus.charisma);
    statistics.setWillpower(statistics.getWillpower() + bonus.willpower);
    statistics.setEndurance(statistics.getEndurance() + bonus.endurance);
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

