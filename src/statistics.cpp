#include "statistics.hpp"

Statistics::Statistics()
{
    strength = 0;
    defence = 0;
    intelligence = 0;
    charisma = 0;
    willpower = 0;
    endurance = 0;
    maxHp = 0;
    hp = 0;
}

int Statistics::getDefence() const{
    return defence;
}

void Statistics::setDefence(int armor)
{
    Statistics::defence = armor;
}

unsigned int Statistics::getStrength() const
{
    return strength;
}

void Statistics::setStrength(unsigned int strength)
{
    Statistics::strength = strength;
}

unsigned int Statistics::getIntelligence() const
{
    return intelligence;
}

void Statistics::setIntelligence(unsigned int intelligence)
{
    Statistics::intelligence = intelligence;
}

unsigned int Statistics::getCharisma() const {
    return charisma;
}

void Statistics::setCharisma(unsigned int charisma) {
    Statistics::charisma = charisma;
}

unsigned int Statistics::getWillpower() const
{
    return willpower;
}

void Statistics::setWillpower(unsigned int willpower)
{
    Statistics::willpower = willpower;
}

unsigned int Statistics::getCurrentHP() const
{
    return hp;
}

void Statistics::setCurrentHP(unsigned int hp)
{
    Statistics::hp = hp;
}

unsigned int Statistics::getMaxHP()
{
    return maxHp;
}

void Statistics::setMaxHP(unsigned int hp)
{
    maxHp = hp;
}

unsigned int Statistics::getEndurance() const
{
    return endurance;
}

void Statistics::setEndurance(unsigned int endurance)
{
    Statistics::endurance = endurance;
}

