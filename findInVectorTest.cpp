#include "gtest/gtest.h"
#include "findInVector.hpp"


class FindInVectorTest : public ::testing::Test
{
    protected:
    FindInVectorTest() {};
    ~FindInVectorTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(FindInVectorTest, Should)
{
    int solution {1};
    //std::vector<int> v = {1,2,3,4};
    EXPECT_EQ(solution,utils::findInVector({1,2,3,2}, 2 ));     // returns last position in which appears
}

TEST_F(FindInVectorTest, Should2)
{
    int solution {0} ;                      // should return NULL but how we can check if on first is the number;
    //std::vector<int> v = {1,2,3,4};
    EXPECT_EQ(solution,utils::findInVector({1,2,3,2}, 4 ));   //works with 1/4 at 0 position 
}
