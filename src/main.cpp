#include <iostream>
#include <set>

class Base{
public:
    Base() {i = 10; j =20; std::cout<<"Base" <<std::endl;}
    Base(int _i, int _j) {i = _i; j=_j;std::cout<<"Base arg" <<std::endl;}

    int i;
    int j;

    bool operator<(const Base& base) const
    {
        return i < base.i;
    }
};


int main()
{
    std::set<int>setintow;
    setintow.insert(10);

    std::set<Base>setBazy;
    Base zmienna(12,77);
    std::cout << "insert?"<<std::endl;

    setBazy.insert(zmienna);
    setBazy.insert(Base() );
    return 0;
}
