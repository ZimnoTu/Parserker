#include <iostream>
#include "story.hpp"

Story::Story()
{
    parserker.setMaxStuffMass(10.0);
}
void Story::StartOfGame()
{
    introTekst();
    int strength, defence, charisma, intelligence, endurance, willpower;
    std::cout << "Sila: ";
    std::cin >> strength;
    parserker.setStrength(strength);
    displayHowManyPointsAreAvaliable();
    if(parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Obrona: ";
        std::cin >> defence;
        parserker.setDefence(defence);
        displayHowManyPointsAreAvaliable();
    }
    if(parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Charyzma: ";
        std::cin >> charisma;
        parserker.setCharisma(charisma);
        displayHowManyPointsAreAvaliable();
    }
    if(parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Inteligencja: ";
        std::cin >> intelligence;
        parserker.setIntelligence(intelligence);
        displayHowManyPointsAreAvaliable();
    }
    if(parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Wytrzymalosc: ";
        std::cin >> endurance;
        parserker.setEndurance(endurance);
        displayHowManyPointsAreAvaliable();
    }
    if(parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Sila woli: ";
        std::cin >> willpower;
        parserker.setWillpower(willpower);
        displayHowManyPointsAreAvaliable();
    }
}
void Story::introTekst()
{
    std::cout << "Witaj mlody Parserkerze!\n Wiec postanowiles podjac wyzwanie i stwic ";
    std::cout <<"czolo przeciwnosciom losu i zmierzyc sie z odwiecznym wrogiem, ktory ";
    std::cout << "od dawna dreczy spokojna spolecznosc. \n";
    std::cout << "Na szczescie laskawe bostwo " << god << " dalo ci mozliwosci ";
    std::cout << "jakch nie ma zwykly smiertelnik.\nPrzyszla pora na pierwszy wybor. ";
    std::cout << "Wybierz w jaki sposob chcesz podzielic punkty przyznane przez " << god;
    std::cout << "\nDostales 12 punktow, rozdziel je madrze pomiedzy:";
    std::cout << "\n\tsile - czyli to jak mocno jestes w tanie udrzyc przeciwnika";
    std::cout << "\n\tobrone - czyli jak mocno sie bronisz przed atakiem";
    std::cout << "\n\tcharyzme - czyli to jak bardzo nie odstraszasz innych";
    std::cout << "\n\tinteligencje - czyli jak bardzo jestes madry";
    std::cout << "\n\twytrzymalosc - czyli ile jestes w stanie na sobie uniesc";
    std::cout << "\n\tsila woli - czyli jak duzo pasji wkladasz w atak i czy potrafisz ";
    std::cout << "oprzec sie pokusom";
    std::cout << "\n\t\tWYBIERAJ!\n";
}
void Story::displayHowManyPointsAreAvaliable()
{
    int points = parserker.howManyPointsAreAvaliable();
    if(points > 0)
    {
        std::cout << "Do rozdysponowania pozostało jeszcze: " << points;
        std::cout << " punktow.\n";
    }
    if(points == 0)
    {
        std::cout << "Wydales wszystkie punkty\n";
    }
}
