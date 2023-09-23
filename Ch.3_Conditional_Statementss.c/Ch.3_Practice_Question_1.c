/* Write a programme to check if a student passed or failed:
        Marks>30 ---> Passed
        Marks<=30 ---> Failed  */

#include <stdio.h>
int main()
{
    int marks;
    printf ("Enter your marks: \n");
    scanf("%d", &marks);

    if (marks>=0 && marks<=30)
    {
        printf("Student is Fail \n");
    }
    else if(marks>=30 && marks<=100)
    {
        printf("Student is Pass");
    }
    else
    {
        printf("Wrong Marks");
    }

    return 0;

}