#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <weapons.hpp>
#include <armor.hpp>
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
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (1, parserker.getStrength());
}
TEST_F (ParserkerTest, Parserker_2_Weapons)
{
    Weapon stick("stick", 1, 1.0);
    Weapon stick2("bigger stick", 2, 2.3);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    parserker.takeWeapon(stick2);
    EXPECT_EQ (2, parserker.getStrength());
}
TEST_F (ParserkerTest, Parserker_weapon_ChangesCurrentStuffMass)
{
    Weapon stick("stick", 1, 2.3);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (2.3, parserker.getCurrentStuffMass());
}
TEST_F (ParserkerTest, Parserker_weapon_isNotTooHeavy)
{
    Weapon stick("stick", 1, 2.3);
    parserker.setMaxStuffMass(10.0);
    EXPECT_TRUE(parserker.isPossibleAddAnotherStuff(stick));
}
TEST_F (ParserkerTest, Parserker_weapon_ToHeavyStuffs)
{
    Weapon stick("stick", 10, 2.3);
    parserker.setMaxStuffMass(1.0);
    EXPECT_FALSE(parserker.isPossibleAddAnotherStuff(stick));
}
TEST_F (ParserkerTest, Parserker_weapon_howMuchCanLiftNow)
{
    Weapon stick("stick", 1, 5.0);
    parserker.setEndurance(1);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (10.0, parserker.getHowMuchCanLiftNow());
}
TEST_F(ParserkerTest, Parserker_canPunOnArmor_Head)
{
    HeadArmor helmet(1, 1.0);
    parserker.setMaxStuffMass(2.0);
    EXPECT_TRUE(parserker.isPossibleAddAnotherStuff(helmet));
}
TEST_F (ParserkerTest, Parserker_armor_putOnArmor_Head)
{
    HeadArmor helmet(1, 1.0);
    parserker.setMaxStuffMass(10);
    parserker.putOnArmor(helmet);
    EXPECT_EQ(1.0, parserker.getCurrentStuffMass());
}