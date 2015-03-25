#pragma once

#include <set>
#include "skill.hpp"
class Skill;
class Reading;

class Parserker {
public:
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
    void addSkill(Skill skill);
    Parserker();

private:
    unsigned int strength;
    unsigned int armor;
    unsigned int intelligence;
    unsigned int charisma;
    unsigned int willpower;
    unsigned int endurance;

    unsigned int hp;
    unsigned int maxHp;

    std::set<Skill>skills;

};

