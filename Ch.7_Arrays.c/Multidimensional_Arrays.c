// Multidimensional Arrays .

// Q --> Store Marks of 3 subjects of 2 students .

#include<stdio.h>
int main(){
    // 2 x 3
    int marks[2][3]; //_ _ _ | _ _ _
    // 1st Student 
    marks[0][0] = 98;
    marks[0][1] = 89;
    marks[0][2] = 90;
    // 2nd Student
    marks[1][0]= 96;
    marks[1][1]= 95;
    marks[1][2]= 92;
    // 3rd Student
    marks[2][0]= 91;
    marks[2][1]= 87;
    marks[2][2]= 86;

    printf("%d", marks[0][0]);

    return 0;



}