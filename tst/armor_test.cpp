#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "armor.hpp"

using namespace testing;

struct ArmorTest : public Test
{
protected:
    Armor armor;
};
