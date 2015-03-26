#include <iostream>
#include "parserker.hpp"
#include "statistics.hpp"

void Parserker::addSkill(Skill skill)
{
    if(!wasSkillAddedBefore(skill))
    {
        skills.insert(skill);
        skill.applyBonuses(this->getStatistics());
    }
}

bool Parserker::wasSkillAddedBefore(Skill &skill)
{
    std::string nameOfSkill = skill.getName();
    unsigned short counter = 0;
    for(auto item : skills)
        if(item.getName() == nameOfSkill)
            ++counter;
    return static_cast<bool>(counter);
}

Statistics &Parserker::getStatistics() {
    return statistics;
}

unsigned int Parserker::getIntelligence() const
{
    return statistics.getIntelligence();
}
void Parserker::setIntelligence(unsigned int intelligence)
{
    statistics.setIntelligence(intelligence);
}
unsigned int Parserker::getArmor() const
{
    return statistics.getArmor();
}
void Parserker::setArmor(unsigned int armor)
{
    statistics.setArmor(armor);
}
unsigned int Parserker::getStrength() const
{
    return statistics.getStrength();
}
void Parserker::setStrength(unsigned int strength)
{
    statistics.setStrength(strength);
}
unsigned int Parserker::getCharisma() const
{
    return statistics.getCharisma();
}
void Parserker::setCharisma(unsigned int charisma)
{
    statistics.setCharisma(charisma);
}
unsigned int Parserker::getWillpower() const
{
    return statistics.getWillpower();
}
void Parserker::setWillpower(unsigned int willpower)
{
    statistics.getWillpower();
}
unsigned int Parserker::getCurrentHP() const
{
    return statistics.getCurrentHP();
}
void Parserker::setCurrentHP(unsigned int hp)
{
    statistics.setCurrentHP(hp);
}
unsigned int Parserker::getMaxHP()
{
    return statistics.getMaxHP();
}
void Parserker::setMaxHP(unsigned int hp)
{
    statistics.setMaxHP(hp);
}
unsigned int Parserker::getEndurance() const
{
    return statistics.getEndurance();
}
void Parserker::setEndurance(unsigned int endurance)
{
    statistics.setEndurance(endurance);
}

void Parserker::takeWeapon(Weapon weapon) {
    currentWeapon = weapon;
    changeStatistics(weapon);
}

void Parserker::changeStatistics(Weapon &weapon) {
    statistics.setStrength(this->getStrength() + weapon.getStrengthBonus());
}
