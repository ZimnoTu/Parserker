#pragma once


class Skill {
public:
    void setInfluenceOnIntelligence(int bonus);
    int getInfluenceOnIntalligence();

private:
    int intalligenceBonus;
    bool operator <(const Skill &skill)const;

};

