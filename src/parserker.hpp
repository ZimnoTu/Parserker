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

    unsigned int getArmor() const ;
    void setArmor(unsigned int armor);
    unsigned int getStrength() const;
    void setStrength(unsigned int strength);
    unsigned int getIntelligence() const ;
    void setIntelligence(unsigned int intelligence);
    unsigned int getCharisma() const;
    void setCharisma(unsigned int charisma);
    unsigned int getWillpower() const;
    void setWillpower(unsigned int charisma);
    unsigned int getCurrentHP() const;
    void setCurrentHP(unsigned int hp);
    unsigned int getMaxHP();
    void setMaxHP(unsigned int hp);
    unsigned int getEndurance() const ;
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
    void changeStatistics(Weapon &weapon);


};

