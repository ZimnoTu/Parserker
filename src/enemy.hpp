#pragma once

#include "parserker.hpp"

class Enemy
{
public:
    void attacks(Parserker &parserker);
protected:
    std::string name;
    int strength;

};
class Troll : public Enemy
{
public:
    Troll();

};
