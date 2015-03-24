#include "skill.hpp"

/*std::string Skill::getName() const{
    return name;
}*/
Reading::Reading()
{
    name = "reading";
    bonus.resize(6);
    bonus[(static_cast<int>(Attributes::intelligence))] = 1;
}

int Skill::getBonus(Attributes attribute) {
    return bonus.at(static_cast<unsigned long>(attribute));
}
