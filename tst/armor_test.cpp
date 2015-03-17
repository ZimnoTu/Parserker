#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "armor.hpp"

using namespace testing;

struct ArmorTest : public Test
{
//protected:
    //  Parserker parserker;
};
TEST_F (ArmorTest, wildHelmetApears)
{
    Armor helmet(0.5, 1);
    EXPECT_EQ(0.5, helmet.getMass());
    EXPECT_EQ(1, helmet.getDefence());
}