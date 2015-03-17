#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "parserker.hpp"

using namespace testing;

struct ParserkerTest : public Test
{
protected:
    Parserker parserker;
};
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