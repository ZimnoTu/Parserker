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
TEST_F (ParserkerTest, ParserkerArmor)
{
    parserker.setArmor(2);
    EXPECT_EQ (2, parserker.getArmor());
}
TEST_F (ParserkerTest, ParserkerStrength)
{
    parserker.setStrength(2);
    EXPECT_EQ (2, parserker.getStrength());
}
TEST_F (ParserkerTest, ParserkerIntelligence)
{
    parserker.setIntelligence(2);
    EXPECT_EQ (2, parserker.getIntelligence());
}
TEST_F (ParserkerTest, ParserkerCharisma)
{
    parserker.setCharisma(2);
    EXPECT_EQ (2, parserker.getCharisma());
}
TEST_F (ParserkerTest, ParserkerWillpower)
{
    parserker.setWillpower(2);
    EXPECT_EQ (2, parserker.getWillpower());
}
TEST_F (ParserkerTest, ParserkerHP)
{
    parserker.setCurrentHP(2);
    EXPECT_EQ (2, parserker.getCurrentHP());
}
TEST_F (ParserkerTest, ParserkerMaxHP)
{
    parserker.setMaxHP(2);
    EXPECT_EQ (2, parserker.getMaxHP());
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

/*
TEST_F (ParserkerTest, Add_2TheSameSkill)
{
    parserker.setIntelligence(2);
    parserker.addReadingSkill();
    parserker.addReadingSkill();
    EXPECT_EQ(3, parserker.getIntelligence());
}*/
