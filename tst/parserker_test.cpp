#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "parserker.hpp"

using namespace testing;

struct ParserkerTest : public Test
{
};
TEST_F (ParserkerTest, ParserkerArmor)
{
    Parserker parserker;
    parserker.setArmor(2);
    EXPECT_EQ (2, parserker.getArmor());
}
TEST_F (ParserkerTest, ParserkerStrength)
{
    Parserker parserker;
    parserker.setStrength(2);
    EXPECT_EQ (2, parserker.getStrength());
}
TEST_F (ParserkerTest, ParserkerIntelligence)
{
    Parserker parserker;
    parserker.setIntelligence(2);
    EXPECT_EQ (2, parserker.getIntelligence());
}
TEST_F (ParserkerTest, ParserkerCharisma)
{
    Parserker parserker;
    parserker.setCharisma(2);
    EXPECT_EQ (2, parserker.getCharisma());
}