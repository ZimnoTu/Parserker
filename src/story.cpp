#include <iostream>
#include "story.hpp"

Story::Story()
{
    parserker.setMaxStuffMass(10.0);
}

void Story::startOfGame()
{
    introTekst();
    waitForDecision();
    parserker.setMaxStuffMass(10.0);
    displayAllStatistics();
}

void Story::setStartStatistics()
{
    setStartStrength();
    setStartDefence();
    setStartCharisma();
    setStartIntelligence();
    setStartEndurance();
    setStartWillpower();
}

void Story::setStartWillpower()
{
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        int parameter;
        std::cout << "Sila woli: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setWillpower(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartWillpower();
        }
    }
}
void Story::setStartEndurance()
{
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        int parameter;
        std::cout << "Wytrzymalosc: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setEndurance(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartEndurance();
        }
    }
}
void Story::setStartIntelligence()
{
    int parameter;
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        std::cout << "Inteligencja: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setIntelligence(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartIntelligence();
        }
    }
}
void Story::setStartCharisma()
{
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        int parameter;
        std::cout << "Charyzma: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setCharisma(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartCharisma();
        }
    }
}
void Story::setStartDefence()
{
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        int parameter;
        std::cout << "Obrona: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setDefence(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartDefence();
        }
    }
}
void Story::setStartStrength()
{
    if (parserker.howManyPointsAreAvaliable() > 0)
    {
        int parameter;
        std::cout << "Sila: ";
        std::cin >> parameter;
        if (parameter <= parserker.howManyPointsAreAvaliable())
        {
            parserker.setStrength(parameter);
            displayHowManyPointsAreAvaliable();
        }
        else
        {
            std::cout << "Blad wprowadzania\n";
            setStartStrength();
        }
    }
}
void Story::introTekst()
{
    std::cout << "Witaj mlody Parserkerze!\n Wiec postanowiles podjac wyzwanie i stwic ";
    std::cout << "czolo przeciwnosciom losu i zmierzyc sie z odwiecznym wrogiem, ktory ";
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
    std::cout << "\nMozesz decydowac sam lub pozwolic aby " << god << " sam zadecydowal";
}
void Story::displayHowManyPointsAreAvaliable()
{
    int points = parserker.howManyPointsAreAvaliable();
    if (points > 0)
    {
        std::cout << "Do rozdysponowania pozostało jeszcze: " << points;
        std::cout << " punktow.\n";
    }
    if (points == 0)
    {
        std::cout << "Wydales wszystkie punkty\n";
    }
}
void Story::displayAllStatistics()
{
    std::cout << "\t\tTwoje statystyki: \n";
    std::cout << "Sila: \t\t\t" << parserker.getStrength() << "\n";
    std::cout << "Obrona: \t\t" << parserker.getDefence() << "\n";
    std::cout << "Charyzma: \t\t" << parserker.getCharisma() << "\n";
    std::cout << "Inteligencja: \t" << parserker.getIntelligence() << "\n";
    std::cout << "Wytrzymalosc: \t" << parserker.getEndurance() << "\n";
    std::cout << "Sila woli: \t\t" << parserker.getWillpower() << "\n";
}
void Story::waitForDecision()
{
    std::string decision;
    std::cout << "\n\nWcisnij \"1\" aby wybrac samodzielnie, wcisnij \"2\" aby " << god << " wybral za ciebie\n";
    std::cin >> decision;
    if (decision == "1")
        setStartStatistics();
    else if (decision == "2")
    {
        std::cout << god << " uwaza, ze dobrze postepujesz!\n";
        setRandomStatistics();
    }
    else
    {
        std::cout << "Nie potrafisz wykonac najprostszego zadania, glupcze! " << god << " sam wybral za ciebie\n";
        setRandomStatistics();
    }
}
void Story::setRandomStatistics()
{
    int strength, defence, charisma, intelligence, endurance, willpower;
    strength = drawNumber();
    parserker.setStrength(strength);
    defence = drawNumber();
    parserker.setDefence(defence);
    charisma = drawNumber();
    parserker.setCharisma(charisma);
    intelligence = drawNumber();
    parserker.setIntelligence(intelligence);
    endurance = drawNumber();
    parserker.setEndurance(endurance);
    willpower = parserker.howManyPointsAreAvaliable();
    parserker.setWillpower(willpower);
}
int Story::drawNumber()
{
    return rand() % (parserker.howManyPointsAreAvaliable() / 2) + 1;
}

void Story::quest1()
{
    quest1_txt1();
    quest1_lookingForStick();
    quest1_pickingStick();
}
void Story::quest1_pickingStick()
{
    Weapon stick("Zwykly kij", 1, 2.0);
    std::cout << "Znalazles to! Czyz to nie piekny kij? Podnies go wpisujac \"pick\"\n";
    quest1_pickingStickLoop(stick);
}
void Story::quest1_pickingStickLoop(Weapon &stick)
{
    std::string command;
    std::cin >> command;
    if(command == "pick")
    {
        parserker.takeWeapon(stick);
        std::cout << "Patrz jaki jestes teraz silny!\n";
        displayAllStatistics();
    }
    else
    {
        std::cout << "Jak mozesz byc az tak bardzo nieogarniety?!\n Wpisz \"pick\"\n";
        quest1_pickingStickLoop(stick);
    }
}

void Story::quest1_lookingForStick()
{
    std::string input;
    int sum = 0;
    int value = 8;
    while (sum < value)
    {
        std::cin >> input;
        if (input == "r")
        {
            sum += parserker.getIntelligence() + 1;
            if (sum < value)
                std::cout << "Jeszcze chwila i to znajdziesz, rozgladaj sie dalej..\n";
        }
        else
        {
            std::cout << "Czy do ciebie na prawde nie docieraja najprostsze polecenia? Wcisnij \"r\" !!!\n";
        }
    }
}
void Story::quest1_txt1()
{
    std::cout << "Jestes absolutnie bezbronny, do dyspozycji masz tylko swoje ";
    parserker.getStrength() < 3 ? std::cout << "watle " : std::cout << "";
    std::cout << "piesci. Musisz zdobyc swoja pierwsza bron. Rozejrzyj sie do okoła, na pewno znajdziesz ";
    std::cout << "cos, co moze sie przydac. Jesli jestes sprytny, powinienes szybko znalezc. ";
    std::cout << "\nAby sie rozgladnac wpisz \"r\"\n";
}
