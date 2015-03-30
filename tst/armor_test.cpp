#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <headArmor.hpp>
#include "armor.hpp"

using namespace testing;

struct ArmorTest : public Test
{
protected:
    Armor armor;
};
TEST_F (ArmorTest, wildHelmetApears)
{
    HeadArmor helmet(1, 0.5);
    armor.wearArmor(helmet);
    EXPECT_EQ(0.5, armor.headArmor.getMass());
    EXPECT_EQ(1, armor.headArmor.getDefenceBonus());
}
TEST_F (ArmorTest, wildBrestplanteApers)
{
    TorsoArmor brestplate(3, 5.0);
    armor.wearArmor(brestplate);
    EXPECT_EQ(5.0, armor.torsoArmor.getMass());
    EXPECT_EQ(3, armor.torsoArmor.getDefenceBonus());
}
TEST_F (ArmorTest, wildShieldApers)
{
    Shield shield(2, 3.0);
    armor.wearArmor(shield);
    EXPECT_EQ(3.0, armor.shield.getMass());
    EXPECT_EQ(2, armor.shield.getDefenceBonus());
}