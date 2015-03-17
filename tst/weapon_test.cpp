#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "weapons.hpp"

using namespace testing;

struct WeaponsTest : public Test
{
//protected:
  //  Parserker parserker;
};
TEST_F (WeaponsTest, wildStickApears)
{
    Weapon stick(1.0, 1);
    EXPECT_EQ(1.0, stick.getMass());
    EXPECT_EQ(1, stick.getStrengthBonus());
}