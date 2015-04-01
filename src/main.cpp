#include <iostream>
#include <vector>
#include <algorithm>

class A{
public:
    std::string getName() {return name;}
    bool isAa;
    bool isBb;
    A() {isAa = false; isBb = false;}

protected:
    std::string name;
};

class B : public A{
public:
    B(std::string _name) {isAa = true; isBb = false; name = _name;}
    B(std::string _name, bool isA, bool isB) {name = _name; isAa = isA; isBb = isB;}
};

std::string getRightMass(A aItem, std::vector<A> &wektor)
{
    if (aItem.isAa)
    {
        std::cout << "Hello its isAa if\n";
        auto element = std::find_if(wektor.begin(), wektor.end(),
                [](A a_Element){return a_Element.isAa;});
        if (element != wektor.end())
            return element->getName();
    }
    if(aItem.isBb)
    {
        std::cout << "Hello its isBb if\n";
        auto element = std::find_if(wektor.begin(), wektor.end(),
                [](A a_Element){return a_Element.isBb;});
        if (element != wektor.end())
            return element->getName();
    }
    return "Empty...";
}
int main()
{
    std::vector<A>wektor;
    B b1("B1\t");
    B b2("B2\t");
    std::cout << getRightMass(b1, wektor) << std::endl;
    wektor.push_back(b1);
    std::cout << getRightMass(b2, wektor) << std::endl;
   // if(getRightMass(b2, wektor))




    return 0;
}
