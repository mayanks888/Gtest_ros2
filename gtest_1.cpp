#include<iostream>
#include<gtest/gtest.h>


// this is syntax for test fucntion its requrie two input (main test and subtest)
TEST (maytest, subtes_1)
{
    ASSERT_TRUE(1==2);
}
// same test and another subtest
TEST (maytest, subtes_2)
{
    ASSERT_TRUE(2==2);
}
// new test and subtest
TEST (maytest_2, subtes_1)
{
    ASSERT_TRUE(5*8==40);
}
// new test case for equal and its should have comma
TEST (maytest_3, subtes_1)
{
    ASSERT_EQ(1,2); //this is  fatal assertion where the test case will stop not stoped
    std::cout<< "after assert eq"<<std::endl;
}

TEST (maytest_4, subtes_1)
{
    EXPECT_EQ(1,1); //this is non fatal assertion where the test case fill not stoped
        std::cout<< "after expect eq"<<std::endl;

}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}