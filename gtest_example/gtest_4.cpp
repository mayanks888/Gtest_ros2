#include<iostream>
#include<gtest/gtest.h>


class gtest_3
{
private:
    /* data */
   int baseval;
public:
    gtest_3(int may)
    {
       baseval=may;
    }
   int increment_val(int incre_byval)
    {
        return (baseval+incre_byval);
    }

};


// this is syntax for test fucntion its requrie two input (main test and subtest)
TEST (msysnk, subtes_1)
{
    // arrange
    gtest_3 gt(100);
    int idname=gt.increment_val(5);
     EXPECT_EQ(idname,105);

}

TEST (msysnk_2, subtes_2)
{
    // arrange
    gtest_3 gt(80);
    int idname=gt.increment_val(6);
     EXPECT_EQ(idname,105);

}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}