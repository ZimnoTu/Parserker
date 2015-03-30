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
    Statistics& getStatistics();
    void takeWeapon(Weapon weapon);
    double getCurrentStuffMass();
    bool isPossibleAddAnotherStuff(Weapon weapon);
    bool isPossibleAddAnotherStuff(HeadArmor headArmor);
    void setMaxStuffMass(double maxMass);
    double getHowMuchCanLiftNow();
    void putOnArmor(HeadArmor headArmor);

    int getStrength() const;
    int getDefence () const;
    int getIntelligence() const ;
    void setIntelligence(unsigned int intelligence);
    int getCharisma() const;
    int getEndurance() const ;
    void setEndurance(unsigned int endurance);
    Parserker();

private:
    std::set<Skill>skills;
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
};

