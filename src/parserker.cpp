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

void Parserker::setIntelligence(int intelligence)
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

void Parserker::setEndurance(int endurance)
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
    currentStuffMass = 0.0;
    maxStuffMass = 0.0;
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
bool Parserker::isPossibleToTakeArmorBecauseOfMass(Armor &newArmor)
{
    return maxStuffMass >= (currentStuffMass - getCurrentArmorElementMass(newArmor)) + newArmor.getMass();
}

void Parserker::putOnArmor(Armor newArmor)
{
    if(isPossibleToTakeArmorBecauseOfMass(newArmor))
    {
        double newMass = currentStuffMass - getCurrentArmorElementMass(newArmor) + newArmor.getMass();
        currentStuffMass = newMass;
        changeArmorElement(newArmor);
        statistics.setDefence(newArmor.getDefenceBonus());
    }
}

double Parserker::getCurrentArmorElementMass(Armor newArmor)
{
    auto element = findKindOfArmor(newArmor);
    if(element != armor.end())
        return element->getMass();
    return 0.0;
}

void Parserker::changeArmorElement(Armor newArmor)
{
    auto element = findKindOfArmor(newArmor);
    if(element != armor.end())
    {
        statistics.setDefence( - element->getDefenceBonus());
        armor.erase(element);
    }
    armor.push_back(newArmor);
}
unsigned long Parserker::getArmorVectorSize()
{
    return armor.size();
}
std::vector<Armor>::iterator Parserker::findKindOfArmor(Armor &newArmor)
{
    std::vector<Armor>::iterator element;
    if(newArmor.isHelemet)
    {
        element =std::find_if(armor.begin(), armor.end(),
                [](Armor armorElement){return armorElement.isHelemet;});
    }
    if(newArmor.isTorsoArmor)
    {
        element =std::find_if(armor.begin(), armor.end(),
                [](Armor armorElement){return armorElement.isTorsoArmor;});
    }
    if(newArmor.isShield)
    {
        element =std::find_if(armor.begin(), armor.end(),
                [](Armor armorElement){return armorElement.isShield;});
    }
    return element;
}
void Parserker::setMaxHP(unsigned int maxHP)
{
    statistics.setMaxHP(maxHP);
}
void Parserker::setCurrentHP(int points)
{
    statistics.setCurrentHP(points);
}
int Parserker::getCurrentHP() const
{
    return statistics.getCurrentHP();
}
void Parserker::setDefence(int defence)
{
    statistics.setDefence(defence);
}
int Parserker::attacks(Enemy &enemy)
{
    int force = 1;
    int luck = 1;
    int strikeForce = statistics.getStrength() * force + 1;
    if((getWillpower()*0.5) + luck - enemy.getDefence()  >= 0)
    {
        enemy.setHP(-strikeForce);
    }

    return 0;
}
int Parserker::getWillpower() const
{
    return statistics.getWillpower();
}
void Parserker::setWillpower(int willpower)
{
    statistics.setWillpower(willpower);
}
void Parserker::setStrength(int strength)
{
    statistics.setStrength(strength);
}
void Parserker::setCharisma(int charisma)
{
    statistics.setCharisma(charisma);
}

void Parserker::healsHimself()
{
    setCurrentHP(getMaxHP() - getCurrentHP());
}

int Parserker::getMaxHP()
{
    return statistics.getMaxHP();
}
int Parserker::howManyPointsAreAvaliable()
{
    int maxPoints = 12;
    int summary = getStrength() + getDefence() + getWillpower() + getCharisma() +
            getIntelligence() + getEndurance();
    return maxPoints - summary;
}
