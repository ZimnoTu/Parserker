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
    currentHp = 0;
}

int Statistics::getDefence() const{
    return defence;
}

void Statistics::setDefence(int defence)
{
    Statistics::defence += defence;
}

int Statistics::getStrength() const
{
    return strength;
}

void Statistics::setStrength(int strength)
{
    Statistics::strength += strength;
}

int Statistics::getIntelligence() const
{
    return intelligence;
}

void Statistics::setIntelligence(int intelligence)
{
    Statistics::intelligence += intelligence;
}

int Statistics::getCharisma() const {
    return charisma;
}

void Statistics::setCharisma(int charisma) {
    Statistics::charisma += charisma;
}

int Statistics::getWillpower() const
{
    return willpower;
}

void Statistics::setWillpower(int willpower)
{
    Statistics::willpower += willpower;
}

int Statistics::getCurrentHP() const
{
    return currentHp;
}

void Statistics::setCurrentHP(int hp)
{

    Statistics::currentHp += hp;
}

int Statistics::getMaxHP()
{
    return maxHp;
}

void Statistics::setMaxHP(int hp)
{
    maxHp = hp;
}

int Statistics::getEndurance() const
{
    return endurance;
}

void Statistics::setEndurance(int endurance)
{
    Statistics::endurance += endurance;
}

