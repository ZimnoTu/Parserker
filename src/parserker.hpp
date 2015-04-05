#pragma once

#include <set>
#include "skill.hpp"
#include "statistics.hpp"
#include "weapons.hpp"
#include "armor.hpp"
#include "enemy.hpp"

class Skill;
class Reading;
class Enemy;

class Parserker
{
public:
    void addSkill(Skill skill);
    Statistics &getStatistics();
    void takeWeapon(Weapon weapon);
    double getCurrentStuffMass();
    bool isPossibleToTakeWeapon(Weapon weapon);
    bool isPossibleToTakeArmorBecauseOfMass(Armor &newArmor);
    void putOnArmor(Armor newArmor);
    double getCurrentArmorElementMass (Armor newArmor);

    void setMaxStuffMass(double maxMass);
    double getHowMuchCanLiftNow();

    int attacks(Enemy &enemy);
    int getStrength() const;
    int getDefence() const;
    void setDefence(int defence);
    int getIntelligence() const;
    void setIntelligence(unsigned int intelligence);
    int getCharisma() const;
    int getEndurance() const;
    void setEndurance(unsigned int endurance);
    void setMaxHP(unsigned int maxHP);
    void setCurrentHP(int points);
    int getCurrentHP();
    int getWillpower() const;
    void setWillpower(int willpower);
    unsigned long getArmorVectorSize();

    Parserker();

private:
    std::set<Skill> skills;
    Statistics statistics;
    double currentStuffMass;
    double maxStuffMass;
    Weapon currentWeapon;
    std::vector<Armor>armor;

    bool wasSkillAddedBefore(Skill &skill);

    void changeStatistics(Weapon &newWeapon);
    int getStrengthWithNewWeapon(Weapon &newWeapon);
    double getCurrentStuffMassWithNewWeapon(Weapon &newWeapon);
    void changeArmorElement(Armor newArmor);
    std::vector<Armor>::iterator findKindOfArmor(Armor &newArmor);
};

