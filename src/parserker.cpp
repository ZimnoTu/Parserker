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
    auto newStrength = getStrength() - currentWeapon.getStrengthBonus() + newWeapon.getStrengthBonus();
    auto newStuffMass = getCurrentStuffMass() - currentWeapon.getMass() + newWeapon.getMass();
    statistics.setStrength(newStrength);
    currentStuffMass = newStuffMass;
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
        armor.headArmor = headArmor;
        currentStuffMass = getCurrentStuffMass() + headArmor.getMass();
    }
}

bool Parserker::isPossibleAddAnotherStuff(HeadArmor headArmor)
{
    return (maxStuffMass >= currentStuffMass + headArmor.getMass());
}
