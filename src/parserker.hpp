#pragma once


class Parserker {
public:



private:
public:
    unsigned int getArmor() const ;
    void setArmor(unsigned int armor);
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

private:
    unsigned int armor;
    unsigned int strength;
    unsigned int intelligence;
    unsigned int charisma;
    unsigned int willpower;
    unsigned int hp;
    unsigned int maxHp;
    unsigned int endurance;

};

