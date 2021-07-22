#include "gtest/gtest.h"
#include "stringLib.hpp"

#include <string>

class StringLibTest : public ::testing::Test
{
    protected:
    StringLibTest() {};
    ~StringLibTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};

//Should_ExpectedBehaviour_When_State
TEST_F(StringLibTest, Should_Return_Letters_With_Underscores_When_Given_Numbers_Letters_Spaces)
{
    std::string solution{"Abcd_hfdg"};
    EXPECT_EQ(solution,utils::StringLib::spacesToUnderscoresRemoveNumbers("8Abcd hfdg"));
}

TEST_F(StringLibTest, test2)
{
    std::string solution{""};
    EXPECT_EQ(solution,utils::StringLib::spacesToUnderscoresRemoveNumbers("0123456789"));
}

TEST_F(StringLibTest, test3)
{
    std::string solution{"___"};
    EXPECT_EQ(solution,utils::StringLib::spacesToUnderscoresRemoveNumbers("   "));
}

TEST_F(StringLibTest, test6spacesToUnderscoresRemoveNumbers)
{
    std::string solution{"abcd"};
    EXPECT_EQ(solution,utils::StringLib::spacesToUnderscoresRemoveNumbers("abc-5d"));   //the same for other signs
}

TEST_F(StringLibTest, test4errorString)
{
    const char* solution{"Error Code: 0"};
    EXPECT_STREQ(solution,utils::StringLib::errorString(0));
}

TEST_F(StringLibTest, test5sameString)
{
    //bool solution{true};
    EXPECT_TRUE(utils::StringLib::sameStrings("abc?!234","abc?!234"));
}
