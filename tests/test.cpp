#include <gtest/gtest.h>
#include "../headers/student.h"
#include "../headers/person.h"
#include "../headers/vector.h"


TEST(vidurkis,check)
{
    student martynas;
    martynas.set_mark(10);
    martynas.set_mark(10);
    martynas.set_egz(10);

    martynas.Calculate_suVidurkiu();

    EXPECT_EQ(martynas.getFinale_suVidurkiu(), 10);
    
}

TEST(mediana,check)
{
    student elena;
    elena.set_mark(8);
    elena.set_mark(8);
    elena.set_egz(8);

    elena.Calculate_suMediana();
  
    EXPECT_EQ(elena.getFinale_suMediana(), 8);
}

Test(vector, check)
{
    Vector<student> student_list;
    student martynas;
    student elena;
    student dominykas;
    student_list.push_back(martynas);
    student_list.push_back(elena);
    student_list.push_back(dominykas);

    EXPECT_EQ(student_list.size(),3);
}


int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}