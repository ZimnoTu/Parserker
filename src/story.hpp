#pragma once

#include "parserker.hpp"

class Story{
public:
    Parserker parserker;

    Story();

    void startOfGame();
    void quest1();

private:
    std::string god = "Ojciec Rydzyk";
    void introTekst();
    void waitForDecision();

    void displayHowManyPointsAreAvaliable();
    void displayAllStatistics();
    void setStartStatistics();
    void setStartStrength();
    void setStartDefence();
    void setStartCharisma();
    void setStartIntelligence();
    void setStartEndurance();
    void setStartWillpower();
    int drawNumber();
    void setRandomStatistics();
    void quest1_txt1();
    void quest1_lookingForStick();
    void quest1_pickingStick();
    void quest1_pickingStickLoop(Weapon &stick);
};