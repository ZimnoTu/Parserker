#include <iostream>
#include <algorithm>
#include "parserker.hpp"

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
    if(isPossibleAddAnotherStuff(weapon))
    {
        changeStatistics(weapon);
        currentWeapon = weapon;
    }
 //   else
  //      std::cout << "Too many stuff, you're to weak\n";
}

void Parserker::changeStatistics(Weapon &newWeapon)
{
    auto newStrength = getStrengthWithNewWeapon(newWeapon);
    auto newStuffMass = getCurrentStuffMassWithNewWeapon(newWeapon);
    statistics.setStrength(newStrength);
    currentStuffMass = newStuffMass;
}

double Parserker::getCurrentStuffMassWithNewWeapon(Weapon &newWeapon) {
    return getCurrentStuffMass() - currentWeapon.getMass() + newWeapon.getMass();
}

int Parserker::getStrengthWithNewWeapon(Weapon &newWeapon) {
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

bool Parserker::isPossibleAddAnotherStuff(Weapon weapon)
{
    return (maxStuffMass >= currentStuffMass + weapon.getMass() );
}

void Parserker::setMaxStuffMass(double maxMass)
{
    maxStuffMass = maxMass + getEndurance() * 5;
}

double Parserker::getHowMuchCanLiftNow()
{
    return maxStuffMass - currentStuffMass;
}

void Parserker::putOnArmor(HeadArmor headArmor)
{
    if(isPossibleAddAnotherStuff(headArmor))
    {
        changeStatistics(headArmor);
        armor.headArmor = headArmor;
    }
}

void Parserker::changeStatistics(HeadArmor &newHeadArmor)
{
    auto newDefence = getDefenceWithNewArmor (newHeadArmor);
    auto newStuffMass = getCurrentStuffMassWithNewArmor(newHeadArmor);
    statistics.setDefence(newDefence);
    currentStuffMass = newStuffMass;
}

bool Parserker::isPossibleAddAnotherStuff(HeadArmor headArmor)
{
    return (maxStuffMass >= currentStuffMass + headArmor.getMass());
}

int Parserker::getDefenceWithNewArmor(HeadArmor &headArmor) {
    return getDefence() - armor.headArmor.getDefenceBonus() + headArmor.getDefenceBonus();
}

double Parserker::getCurrentStuffMassWithNewArmor(HeadArmor &headArmor)
{
    return getCurrentStuffMass() - armor.headArmor.getMass() + headArmor.getMass();
}

int Parserker::getDefence() const {
    return statistics.getDefence();
}
