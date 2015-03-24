#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "skill.hpp"

using namespace testing;

struct SkillsTest : public Test
{

};
TEST_F (SkillsTest, skillIsMade)
{
    std::vector<Skill>skills;
    Reading reading;
    skills.push_back(reading);
    //unsigned int position = Attributes::intelligence;
    EXPECT_EQ(1, skills.at(0).getBonus(Attributes::intelligence));
}