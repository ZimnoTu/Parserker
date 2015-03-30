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
    bool isPossibleToTakeHelmet(HeadArmor headArmor);
    bool isPossibleToTakeTorsoArmor(TorsoArmor torsoArmor);
    bool isPossibleToTakeShield(Shield shield);
    void setMaxStuffMass(double maxMass);
    double getHowMuchCanLiftNow();
    void putOnArmor(HeadArmor headArmor);
    void putOnArmor(TorsoArmor torsoArmor);

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

    void changeStatistics(HeadArmor &newHeadArmor);
    int getDefenceWithNewArmor(HeadArmor &armor);
    double getCurrentStuffMassWithNewArmor(HeadArmor &headArmor);

    void changeStatistics(TorsoArmor &newTorsoArmor);
    int getDefenceWithNewArmor(TorsoArmor &newTorsoArmor);
    double getCurrentStuffMassWithNewArmor(TorsoArmor &newTorsoArmor);
};

