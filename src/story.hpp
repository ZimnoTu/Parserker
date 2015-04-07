#pragma once

#include "parserker.hpp"

class Story{
public:
    Parserker parserker;

    Story();

    void StartOfGame();

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
};