#pragma once

#include "parserker.hpp"

class Story{
public:
    Parserker parserker;

    Story();

    void StartOfGame();

private:
    std::string god = "NAZWA BOGA";
    void introTekst();

    void displayHowManyPointsAreAvaliable();
    void displayAllStatistics();
    void setStartStatistics();
    void setStartStrength();
    void setStartDefence();
    void setStartCharisma();
    void setStartIntelligence();
    void setStartEndurance();
    void setStartWillpower();
};