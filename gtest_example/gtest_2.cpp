#include<iostream>
#include<gtest/gtest.h>


// this is syntax for test fucntion its requrie two input (main test and subtest)
TEST (maytest, subtes_1)
{
    // arrange
    int val=20;
    int newval=3;
     
    //  act
    val=val+newval;

    // assert
    ASSERT_TRUE(val==23);
}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}