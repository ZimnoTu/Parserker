#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <story.hpp>

using namespace testing;

struct StoryTest : public Test
{
protected:
    Story story;
};

TEST_F(StoryTest, nothing)
{

}