#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <weapons.hpp>
#include "parserker.hpp"
#include "skill.hpp"

using namespace testing;

struct ParserkerTest : public Test
{
protected:
    Parserker parserker;
};
TEST_F (ParserkerTest, BlankParserker)
{
    EXPECT_EQ (0, parserker.getIntelligence());
}
TEST_F (ParserkerTest, Parserker_settingIntelligence)
{
    parserker.setIntelligence(2);
    EXPECT_EQ (2, parserker.getIntelligence());
}
TEST_F (ParserkerTest, Add_the_skill)
{
    Reading reading;
    parserker.addSkill(reading);
    EXPECT_EQ(1, parserker.getIntelligence());
}
TEST_F (ParserkerTest, Add_2_Different_Skill)
{
    Reading reading;
    MakeUp makeUp;
    parserker.addSkill(makeUp);
    parserker.addSkill(reading);
    EXPECT_EQ(1, parserker.getCharisma());
    EXPECT_EQ(1, parserker.getIntelligence());
}

TEST_F (ParserkerTest, Add_2TheSameSkill)
{
    Reading reading;
    parserker.addSkill(reading);
    parserker.addSkill(reading);
    EXPECT_EQ(1, parserker.getIntelligence());
}
TEST_F (ParserkerTest, Parserker_weapon_ChangesStrength)
{
    Weapon stick("stick", 1, 1.0);
    parserker.takeWeapon(stick);
    EXPECT_EQ (1, parserker.getStrength());
}
TEST_F (ParserkerTest, Parserker_2_Weapons)
{
    Weapon stick("stick", 1, 1.0);
    Weapon stick2("bigger stick", 2, 2.3);
    parserker.takeWeapon(stick);
    parserker.takeWeapon(stick2);
    EXPECT_EQ (2, parserker.getStrength());
}
TEST_F (ParserkerTest, Parserker_weapon_ChangesCurrentStuffMass)
{
    Weapon stick("stick", 1, 2.3);
    parserker.takeWeapon(stick);
    EXPECT_EQ (2.3, parserker.getCurrentStuffMass());
}
