#pragma once

#include <set>
#include "skill.hpp"
#include "statistics.hpp"
#include "weapons.hpp"
#include "armor.hpp"

class Skill;

class Reading;

class Parserker
{
public:
    void addSkill(Skill skill);
    Statistics &getStatistics();
    void takeWeapon(Weapon weapon);
    double getCurrentStuffMass();
    bool isPossibleToTakeWeapon(Weapon weapon);
    bool isPossibleToTakeArmor(Armor armor);
    void putOnArmor(Armor armor);

    void setMaxStuffMass(double maxMass);
    double getHowMuchCanLiftNow();

    int getStrength() const;
    int getDefence() const;
    int getIntelligence() const;
    void setIntelligence(unsigned int intelligence);
    int getCharisma() const;
    int getEndurance() const;
    void setEndurance(unsigned int endurance);
    Parserker();

private:
    std::set<Skill> skills;
    Statistics statistics;
    double currentStuffMass;
    double maxStuffMass;
    Weapon currentWeapon;
    Armor armor;

    bool wasSkillAddedBefore(Skill &skill);

    void changeStatistics(Weapon &newWeapon);
    int getStrengthWithNewWeapon(Weapon &newWeapon);
    double getCurrentStuffMassWithNewWeapon(Weapon &newWeapon);

};

