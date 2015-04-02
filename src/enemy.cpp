#include "enemy.hpp"

Troll::Troll()
{
    strength = 1;
    name = "Troll";
}
void Enemy::attacks(Parserker &parserker)
{
    bool isPossibleToHit;
    int luck = 1;
    int force = 1;
    int strikeForce = strength * force;

    isPossibleToHit =  (luck - parserker.getDefence() >= 0 );
    if(isPossibleToHit && (parserker.getCurrentHP() - strikeForce) >= 0)
    {
        parserker.setCurrentHP(-strikeForce);
    }
}
