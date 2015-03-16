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