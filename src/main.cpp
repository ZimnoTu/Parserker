#include <iostream>
#include <set>
#include <string>

class Base{
public:
    Base()    {i = 10; name = "20";}
    Base(int _i, std::string _name)    { i = _i; name = _name;   }

    int i;
   // int j;
    std::string name;

    bool operator<(const Base& base) const
    {

        //return (/*i < base.i &&*/ name < base.j);
        return name.compare(base.name) < 0;
    }
};


int main()
{
    std::set<int>setintow;
    setintow.insert(10);

    std::set<Base>setBazy;
    Base zmienna(1, "1");
    std::cout << "insert?"<<std::endl;

    setBazy.insert(zmienna);
    setBazy.insert(Base() );

   // std::cout << setBazy.size() << std::endl;

    if (setBazy.end() != setBazy.find(Base(1, "dupa"))) {
        std::cout << "Jest!" << std::endl;
    }
    else {
        std::cout << "Nie ma :(" << std::endl;
    }

    if (setBazy.find(Base(100, "20")) != setBazy.end()) {
        std::cout << "2-\tJest!" << std::endl;
    }
    else {
        std::cout << "2-\tNie ma :(" << std::endl;
    }
    return 0;
}
