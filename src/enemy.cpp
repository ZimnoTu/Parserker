#include "enemy.hpp"

Troll::Troll()
{
    strength = 1;
    name = "Troll";
    hp = 5;
    defence = 2;
}
void Enemy::attacks(Parserker &parserker)
{
    bool isPossibleToHit;
    int luck = 1;
    int force = 1;
    int strikeForce = strength * force;

    isPossibleToHit = (luck - parserker.getDefence() >= 0);
    if (isPossibleToHit && (parserker.getCurrentHP() - strikeForce) >= 0)
    {
        parserker.setCurrentHP(-strikeForce);
    }
}
int Enemy::getHP()
{
    return hp;
}
void Enemy::setHP(int points)
{
    hp += points;
}
int Enemy::getDefence()
{
    return defence;
}
