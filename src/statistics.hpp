#pragma once


class Statistics
{
public:
    int getDefence() const;
    void setDefence(int armor);
    int getStrength() const;
    void setStrength(int strength);
    int getIntelligence() const;
    void setIntelligence(int intelligence);
    int getCharisma() const;
    void setCharisma(int charisma);
    int getWillpower() const;
    void setWillpower(int charisma);
    int getCurrentHP() const;
    void setCurrentHP(int hp);
    int getMaxHP();
    void setMaxHP(int hp);
    int getEndurance() const;
    void setEndurance(int endurance);

    Statistics();

private:
    int currentHp;
    int maxHp;
    int defence;
    int strength;
    int intelligence;
    int charisma;
    int willpower;
    int endurance;
};



