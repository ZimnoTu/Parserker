#pragma once

#include <set>
#include "skill.hpp"
#include "statistics.hpp"

class Skill;
class Reading;

class Parserker
{
public:
    void addSkill(Skill skill);
    Statistics& getStatistics();
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

private:
    std::set<Skill>skills;
    Statistics statistics;

    bool wasSkillAddedBefore(Skill &skill);
};

