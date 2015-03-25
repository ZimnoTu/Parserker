#include "skill.hpp"

void Skill::applyBonuses(Parserker &parserker)
{
    parserker.setStrength(parserker.getStrength() + bonus.strength);
    parserker.setArmor(parserker.getArmor() + bonus.armor);
    parserker.setIntelligence(parserker.getIntelligence() + bonus.intelligence);
    parserker.setCharisma(parserker.getCharisma() + bonus.charisma);
    parserker.setWillpower(parserker.getWillpower() + bonus.willpower);
    parserker.setEndurance(parserker.getEndurance() + bonus.endurance);
}

std::string Skill::getName() const {
    return name;
}

bool Skill::operator<(const Skill &skill) const
{
    return name.compare(skill.getName()) < 0;
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
