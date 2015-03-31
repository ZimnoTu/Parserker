#include <iostream>
#include <algorithm>
#include "parserker.hpp"

void Parserker::addSkill(Skill skill)
{
    if (!wasSkillAddedBefore(skill))
    {
        skills.insert(skill);
        skill.applyBonuses(this->getStatistics());
    }
}

bool Parserker::wasSkillAddedBefore(Skill &skill)
{
    bool result = static_cast<bool>(std::count(skills.begin(), skills.end(), skill));
    return result;
}

Statistics &Parserker::getStatistics()
{
    return statistics;
}

int Parserker::getIntelligence() const
{
    return statistics.getIntelligence();
}

void Parserker::setIntelligence(unsigned int intelligence)
{
    statistics.setIntelligence(intelligence);
}

int Parserker::getStrength() const
{
    return statistics.getStrength();
}

int Parserker::getCharisma() const
{
    return statistics.getCharisma();
}

int Parserker::getEndurance() const
{
    return statistics.getEndurance();
}

void Parserker::setEndurance(unsigned int endurance)
{
    statistics.setEndurance(endurance);
}

void Parserker::takeWeapon(Weapon weapon)
{
    if (isPossibleToTakeWeapon(weapon))
    {
        changeStatistics(weapon);
        currentWeapon = weapon;
    }
}

void Parserker::changeStatistics(Weapon &newWeapon)
{
    auto newStrength = getStrengthWithNewWeapon(newWeapon);
    auto newStuffMass = getCurrentStuffMassWithNewWeapon(newWeapon);
    statistics.setStrength(newStrength);
    currentStuffMass = newStuffMass;
}

double Parserker::getCurrentStuffMassWithNewWeapon(Weapon &newWeapon)
{
    return getCurrentStuffMass() - currentWeapon.getMass() + newWeapon.getMass();
}

int Parserker::getStrengthWithNewWeapon(Weapon &newWeapon)
{
    return getStrength() - currentWeapon.getStrengthBonus() + newWeapon.getStrengthBonus();
}

double Parserker::getCurrentStuffMass()
{
    return currentStuffMass;
}

Parserker::Parserker()
{
    currentStuffMass = 0;
    maxStuffMass = 0;
}

bool Parserker::isPossibleToTakeWeapon(Weapon weapon)
{
    return (maxStuffMass >= (currentStuffMass - currentWeapon.getMass()) + weapon.getMass());
}

void Parserker::setMaxStuffMass(double maxMass)
{
    maxStuffMass = maxMass + getEndurance() * 5;
}

double Parserker::getHowMuchCanLiftNow()
{
    return maxStuffMass - currentStuffMass;
}
int Parserker::getDefence() const
{
    return statistics.getDefence();
}
bool Parserker::isPossibleToTakeArmor(Armor armor)
{
    return (maxStuffMass >= (currentStuffMass - currentWeapon.getMass()) + armor.getMass());
}
void Parserker::putOnArmor(Armor armor)
{
    if(isPossibleToTakeArmor(armor))
    {
        Parserker::armor = armor;
        statistics.setDefence(armor.getDefenceBonus());
        currentStuffMass = armor.getMass();
    }
}
