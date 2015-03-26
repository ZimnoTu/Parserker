#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

struct Bersarker
{
    int sila;
    int charyzma;
    Bersarker()
    {
        sila = 10;
        charyzma =1;
    }

    int getSila()
    {
        return sila;
    }
    void setsila(int newsila)
    {
        sila=newsila;
    }

    int getCharyzma()
    {
        return charyzma;
    }
    void setCharyzma(int newCharyzma)
    {
        charyzma = newCharyzma;
    }
};

struct Skille
{
    std::string nazwa;
    int wartosc;
    Skille()
    {
        nazwa = "dsasda";
        wartosc = 1;
    }
    std::vector<int> modify(std::vector<int> wczesniejszeWartosci)
    {
        std::vector<int> newWartosci;
        std::for_each(wczesniejszeWartosci.begin(), wczesniejszeWartosci.end(),
                [&] (int dd)
                {
                    newWartosci.push_back(dd+wartosc);
                }
        );
        return newWartosci;
    }
};

int main()
{
    Bersarker Gosia;
    Skille czytanie;
    std::cout << "Zmiana sily: \n";
    std::cout << Gosia.getSila() << '\t';
    std::vector<int> p;
    p.push_back(Gosia.getSila());
    std::vector<int> p1 = czytanie.modify(p);
    Gosia.setsila(p1.at(0));
    std::cout << Gosia.getSila() << '\t';
    std::cout << std::endl;

    std::cout << "Zmiana charyzma: \n";
    std::cout << Gosia.getCharyzma() << '\t';
    std::vector<int> p2;
    p2.push_back(Gosia.getCharyzma());
    p2 = czytanie.modify(p2);
    Gosia.setCharyzma(p2.at(0));
    std::cout << Gosia.getCharyzma() << '\t';
    std::cout << std::endl;

    std::cout << "zmiana 2 parametrow na raz: \n" ;
    std::cout << Gosia.getCharyzma() << ' ' << Gosia.getSila() << '\t';
    std::vector<int> p4;
    p4.push_back(Gosia.getCharyzma());
    p4.push_back(Gosia.getSila());
    std::vector<int> p5 = czytanie.modify(p4);
    Gosia.setCharyzma(p5.at(0));
    Gosia.setsila(p5.at(1));
    std::cout << Gosia.getCharyzma() << ' ' << Gosia.getSila() << '\t';
    std::cout << std::endl;
    return 0;
}
