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
   // EXPECT_EQ(1, helmet.getDefence());
}