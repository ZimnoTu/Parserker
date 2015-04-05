#pragma once

#include "parserker.hpp"

class Parserker;

class Enemy
{
public:
    void attacks(Parserker &parserker);
    void setHP(int points);
    int getHP();
    int getDefence();

protected:
    std::string name;
    int strength;
    int hp;
    int defence;

};
class Troll : public Enemy
{
public:
    Troll();

};
