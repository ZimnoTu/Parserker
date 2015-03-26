#include <gtest/gtest.h>
#include <gmock/gmock.h>
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
TEST_F (ParserkerTest, ParserkerArmor) {
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
