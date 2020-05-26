#include<iostream>
#include<gtest/gtest.h>

// this is code to test
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
        baseval= (baseval+incre_byval);
    }
    int ret_val()
    {
        return baseval;
    }

};

// struct DecisionTest : public ::testing::Test 
// {   
//     gtest_3 *gt_f;
//     void SetUp()
//     {
//         gt_f=new gtest_3(100);
//     }
//     void Teardown()
//     {
//         delete gt_f;
//     }
// };


class DecisionTest : public ::testing::Test 
{   
    protected:
    gtest_3 *gt_f;
    void SetUp()
    {
        gt_f=new gtest_3(100);
    }
    void Teardown()
    {
        delete gt_f;
    }
};
 
// this is syntax for test fucntion its requrie two input (main test and subtest)
TEST_F (DecisionTest, increby5)
{
    // arrange
    // gtest_3 gt(100);
    gt_f->increment_val(5);
    // int idname=gt.increment_val(5);
    //  EXPECT_EQ(gt_f->ret_val,105);
    std::cout<<gt_f->ret_val()<<std::endl;
    ASSERT_EQ(gt_f->ret_val(),105);
}

TEST_F (DecisionTest, increby10)
{
    // arrange
    // gtest_3 gt(100);
    gt_f->increment_val(10);
    // int idname=gt.increment_val(5);
    //  EXPECT_EQ(gt_f->ret_val,105);
    std::cout<<gt_f->ret_val()<<std::endl;
    ASSERT_EQ(gt_f->ret_val(),105);
}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}