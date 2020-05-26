#include<iostream>
#include<gtest/gtest.h>


class gtest_3
{
private:
    /* data */
    std::string new_id;
public:
    gtest_3(std::string may)
    {
       new_id=may;
    }
    std::string create_id()
    {
        return new_id;
    }

};


// this is syntax for test fucntion its requrie two input (main test and subtest)
TEST (msysnk, subtes_1)
{
    // arrange
    gtest_3 gt("mayank");
    std::string idname=gt.create_id();
     
    //  act


    // assert
     EXPECT_STREQ(idname.c_str(),"mayank");
}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}