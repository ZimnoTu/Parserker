#pragma once

#include "parserker.hpp"

class Parserker;

class Enemy
{
public:
    void attacks(Parserker &parserker);
    void setHP(int points);
protected:
    std::string name;
    int strength;
    int hp;

};
class Troll : public Enemy
{
public:
    Troll();
    int getHP();
};
