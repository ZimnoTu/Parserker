#include <iostream>
#include "parserker.hpp"

unsigned int Parserker::getArmor() const
{
    return armor;
}
void Parserker::setArmor(unsigned int armor)
{
    Parserker::armor = armor;
}
unsigned int Parserker::getStrength() const
{
    return strength;
}
void Parserker::setStrength(unsigned int strength)
{
    Parserker::strength = strength;
}
unsigned int Parserker::getIntelligence() const
{
    return intelligence;
}
void Parserker::setIntelligence(unsigned int intelligence)
{
    Parserker::intelligence = intelligence;
}
unsigned int Parserker::getCharisma() const {
    return charisma;
}
void Parserker::setCharisma(unsigned int charisma) {
    Parserker::charisma = charisma;
}
unsigned int Parserker::getWillpower() const
{
    return willpower;
}
void Parserker::setWillpower(unsigned int willpower)
{
    Parserker::willpower = willpower;
}
unsigned int Parserker::getCurrentHP() const
{
    return hp;
}
void Parserker::setCurrentHP(unsigned int hp)
{
    Parserker::hp = hp;
}
unsigned int Parserker::getMaxHP()
{
    return maxHp;
}
void Parserker::setMaxHP(unsigned int hp)
{
    Parserker::maxHp = hp;
}
unsigned int Parserker::getEndurance() const
{
    return endurance;
}
void Parserker::setEndurance(unsigned int endurance)
{
    Parserker::endurance = endurance;
}
void Parserker::addReadingSkill() {

    if (skills.find(Skill("reading", 1)) == skills.end())
    {
        skills.insert(Skill("reading", 1));
        unsigned int intelligence = getIntelligence() + 1;
        setIntelligence(intelligence);
        std::cout << "\tif!!!\n";
    }
}
