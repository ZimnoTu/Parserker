#pragma once


class Statistics {
public:
    int getDefence() const;
    void setDefence(int armor);
    unsigned int getStrength() const;
    void setStrength(unsigned int strength);
    unsigned int getIntelligence() const ;
    void setIntelligence(unsigned int intelligence);
    unsigned int getCharisma() const;
    void setCharisma(unsigned int charisma);
    unsigned int getWillpower() const;
    void setWillpower(unsigned int charisma);
    unsigned int getCurrentHP() const;
    void setCurrentHP(unsigned int hp);
    unsigned int getMaxHP();
    void setMaxHP(unsigned int hp);
    unsigned int getEndurance() const ;
    void setEndurance(unsigned int endurance);

    Statistics();

private:
    unsigned int hp;
    unsigned int maxHp;
    int defence;
    int strength;
    int intelligence;
    int charisma;
    int willpower;
    int endurance;
};



