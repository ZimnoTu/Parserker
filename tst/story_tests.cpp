#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <story.hpp>

using namespace testing;

struct StoryTest : public Test
{
protected:
    Story story;
};

/*TEST_F(StoryTest, check_if_number_of_provided_points_is_good)
{

}*/