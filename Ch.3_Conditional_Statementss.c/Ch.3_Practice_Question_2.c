/*
Que. --> Write a programme to give grades to a student
            marks<30 is C
            70 > marks >=30 is B
            70>= marks <90 is A
            90<= marks <=100 is A+
*/

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);

    if (marks<30)
    {
        printf("You got C");
    }
    else if(marks>=30 && marks<70)
    {
        printf("You got B");
    }
    else if(marks>=70 && marks<90){
        printf("You got A");
    }
    else if (marks>=90 && marks<=100){
        printf("You got A+");
    }
    else{
        printf("You are Promoted");
    }

    return 0;
}