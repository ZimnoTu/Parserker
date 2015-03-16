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
    unsigned int getHP() const;
    void setHP(unsigned int hp);

private:
    unsigned int armor;
    unsigned int strength;
    unsigned int intelligence;
    unsigned int charisma;
    unsigned int willpower;
    unsigned int hp;

};

