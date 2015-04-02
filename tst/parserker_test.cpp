#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "parserker.hpp"

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

TEST_F (ParserkerTest, setting_intelligence)
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

TEST_F (ParserkerTest, weapon_ChangesStrength)
{
    Weapon stick("stick", 1, 1.0);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (1, parserker.getStrength());
}

TEST_F (ParserkerTest, 2_Weapons)
{
    Weapon stick("stick", 1, 5.0);
    Weapon stick2("bigger stick", 2, 7.3);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    parserker.takeWeapon(stick2);
    EXPECT_EQ (2, parserker.getStrength());
}

TEST_F (ParserkerTest, weapon_ChangesCurrentStuffMass)
{
    Weapon stick("stick", 1, 2.3);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (2.3, parserker.getCurrentStuffMass());
}

TEST_F (ParserkerTest, weapon_isNotTooHeavy)
{
    Weapon stick("stick", 1, 2.3);
    parserker.setMaxStuffMass(10.0);
    EXPECT_TRUE(parserker.isPossibleToTakeWeapon(stick));
}

TEST_F (ParserkerTest, weapon_ToHeavyStuffs)
{
    Weapon stick("stick", 10, 2.3);
    parserker.setMaxStuffMass(1.0);
    EXPECT_FALSE(parserker.isPossibleToTakeWeapon(stick));
}

TEST_F (ParserkerTest, weapon_howMuchCanLiftNow)
{
    Weapon stick("stick", 1, 5.0);
    parserker.setEndurance(1);
    parserker.setMaxStuffMass(10);
    parserker.takeWeapon(stick);
    EXPECT_EQ (10.0, parserker.getHowMuchCanLiftNow());
}

TEST_F(ParserkerTest, isPossibleToTakeArmor_Head)
{
    HeadArmor helmet(1, 1.0);
    parserker.setMaxStuffMass(2.0);
    EXPECT_TRUE(parserker.isPossibleToTakeArmorBecauseOfMass(helmet));
}

TEST_F(ParserkerTest, is_NOT_PossibleToTakeArmor_Head)
{
    HeadArmor helmet(1, 3.0);
    parserker.setMaxStuffMass(2.0);
    EXPECT_FALSE(parserker.isPossibleToTakeArmorBecauseOfMass(helmet));
}

TEST_F (ParserkerTest, armor_putOnArmor_Head)
{
    HeadArmor helmet(1, 1.0);
    parserker.setMaxStuffMass(10);
    parserker.putOnArmor(helmet);
    EXPECT_EQ(1.0, parserker.getCurrentStuffMass());
    EXPECT_EQ(1, parserker.getDefence());
}

TEST_F (ParserkerTest, armor_putOnArmor_Head_NOT)
{
    HeadArmor helmet(1, 11.0);
    parserker.setMaxStuffMass(10.0);
    parserker.putOnArmor(helmet);
    EXPECT_EQ(0.0, parserker.getCurrentStuffMass());
}

TEST_F (ParserkerTest, armor_Head_2Helmets)
{
    HeadArmor helmet1(1, 8.0);
    HeadArmor helmet2(13, 9.5);
    parserker.setMaxStuffMass(15);
    parserker.putOnArmor(helmet1);
    parserker.putOnArmor(helmet2);
    EXPECT_EQ(9.5, parserker.getCurrentStuffMass());
    EXPECT_EQ(13, parserker.getDefence());
    EXPECT_EQ(1,parserker.getArmorVectorSize());
}

TEST_F(ParserkerTest, canPunOnArmor_Torso)
{
    TorsoArmor torsoArmor(1, 10.0);
    parserker.setMaxStuffMass(20.0);
    EXPECT_TRUE(parserker.isPossibleToTakeArmorBecauseOfMass(torsoArmor));
}

TEST_F(ParserkerTest, canNotPunOnArmor_Torso)
{
    TorsoArmor torsoArmor(1, 30.0);
    parserker.setMaxStuffMass(20.0);
    EXPECT_FALSE(parserker.isPossibleToTakeArmorBecauseOfMass(torsoArmor));
}

TEST_F (ParserkerTest, armor_putOnArmor_Torso)
{
    TorsoArmor torsoArmor(1, 20.0);
    parserker.setMaxStuffMass(30.0);
    parserker.putOnArmor(torsoArmor);
    EXPECT_EQ(20.0, parserker.getCurrentStuffMass());
    EXPECT_EQ(1, parserker.getDefence());
}

TEST_F (ParserkerTest, armor_putOnArmor_Torso_NOT)
{
    TorsoArmor torsoArmor(1, 30.0);
    parserker.setMaxStuffMass(1);
    parserker.putOnArmor(torsoArmor);
    EXPECT_EQ(0.0, parserker.getCurrentStuffMass());
}

TEST_F (ParserkerTest, armor_Torso_2breastplate)
{
    TorsoArmor torsoArmor1(1, 20.0);
    TorsoArmor torsoArmor2(4, 12.5);
    parserker.setMaxStuffMass(30);
    parserker.putOnArmor(torsoArmor1);
    parserker.putOnArmor(torsoArmor2);
    EXPECT_EQ(12.5, parserker.getCurrentStuffMass());
    EXPECT_EQ(4, parserker.getDefence());
    EXPECT_EQ(1,parserker.getArmorVectorSize());
}

TEST_F(ParserkerTest, canPunOnArmor_Shield)
{
    Shield shield1(2, 5.0);
    parserker.setMaxStuffMass(10.0);
    EXPECT_TRUE(parserker.isPossibleToTakeArmorBecauseOfMass(shield1));
}

TEST_F (ParserkerTest, armor_putOnArmor_Shield)
{
    Shield shield1(2, 10.3);
    parserker.setMaxStuffMass(11.0);
    parserker.putOnArmor(shield1);
    EXPECT_EQ(10.3, parserker.getCurrentStuffMass());
    EXPECT_EQ(2, parserker.getDefence());
}

TEST_F (ParserkerTest, armor_putOnArmor_Shield_NOT)
{
    Shield shield1(1, 30.0);
    parserker.setMaxStuffMass(1);
    parserker.putOnArmor(shield1);
    EXPECT_EQ(0.0, parserker.getCurrentStuffMass());
}

TEST_F (ParserkerTest, armor_Torso_2Shields)
{
    Shield shield1(1, 20.0);
    Shield shield2(7, 12.5);
    parserker.setMaxStuffMass(25.0);
    parserker.putOnArmor(shield1);
    parserker.putOnArmor(shield2);
    EXPECT_EQ(12.5, parserker.getCurrentStuffMass());
    EXPECT_EQ(7, parserker.getDefence());
    EXPECT_EQ(1,parserker.getArmorVectorSize());
}

TEST_F(ParserkerTest, addHelmet_and_Torso)
{
    HeadArmor helmet(1, 1.5);
    TorsoArmor torso(2, 5.0);
    parserker.setMaxStuffMass(10.0);
    parserker.putOnArmor(helmet);
    parserker.putOnArmor(torso);
    EXPECT_EQ(3, parserker.getDefence());
    EXPECT_EQ(6.5, parserker.getCurrentStuffMass());
}

TEST_F(ParserkerTest, armorAndWeapon_summaryMass)
{
    parserker.setMaxStuffMass(12.0);
    Shield shield(1, 5.0);
    HeadArmor helmet (1, 2.0);
    TorsoArmor breastplate (2, 3.0);
    Weapon stick(1, 2.0);
    parserker.putOnArmor(shield);
    parserker.putOnArmor(helmet);
    parserker.putOnArmor(breastplate);
    parserker.takeWeapon(stick);
    EXPECT_EQ(4, parserker.getDefence());
    EXPECT_EQ(12, parserker.getCurrentStuffMass());
    EXPECT_EQ(1, parserker.getStrength());
}
