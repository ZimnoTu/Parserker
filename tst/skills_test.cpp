#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "skill.hpp"

using namespace testing;

struct SkillsTest : public Test
{

};
TEST_F (SkillsTest, applylingBonus)
{
    Parserker parserker;
    Reading reading;
    reading.applyBonuses(parserker);
    EXPECT_EQ(1, parserker.getIntelligence());
}