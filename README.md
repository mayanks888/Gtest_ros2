# GTEST


##### Description

1. Imp link

   1. https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
   2. https://www.youtube.com/watch?v=nbFXI9SDfbk
   3. http://cheezyworld.com/wp-content/uploads/2010/12/PlainGoogleQuickTestReferenceGuide1.pdf
   4. https://gitlab.com/autowarefoundation/autoware.ai/core_perception

2. what is gtest

   ans: this ths unit test script for your functionality in c++ code for eg

3. how to implement gtest in vscode

   Lets begins:	

   1. compiling_gtest

      ```
      g++ -Wall -g -pthread <cpp file> -lgtest_main  -lgtest -lpthread

      g++ -Wall -g -pthread gtest_5_ixture.cpp -lgtest_main  -lgtest -lpthread
      
      ```

   2. Running ./out

   3. 

4. important point to consider

   1. single test should  have single assertion

   2. comparing string

      ```
       EXPECT_STREQ(idname.c_str(),"mayank");
      2. 
      ```

      fdf

   3. 

5. 
