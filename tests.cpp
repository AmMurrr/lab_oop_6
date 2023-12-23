#include <sstream>
#include <vector>
#include <memory>
#include "dragon.hpp"
#include "bull.hpp"
#include "toad.hpp"
#include "factory.hpp"
#include <gtest/gtest.h>

TEST(Constructors, Dragon) 
{
    Dragon s(0, 0, "Sandy");
    std::stringstream out;
    s.print(out);
    ASSERT_EQ(out.str(), "Dragon Sandy {0, 0}");
}

TEST(Constructors, Bull) 
{
    Bull w(1, 99, "Sumerok");
    std::stringstream out;
    w.print(out);
    ASSERT_EQ(out.str(), "Bull Sumerok {1, 99}");
}

TEST(Constructors, Toad) 
{
    Toad d(50, 50, "Woody");
    std::stringstream out;
    d.print(out);
    ASSERT_EQ(out.str(), "Toad Woody {50, 50}");
}
