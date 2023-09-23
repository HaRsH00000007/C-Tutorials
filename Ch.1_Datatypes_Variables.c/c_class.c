#include <stdio.h>
int main()
{
    // int a=4;

    // printf("%d \n", a++);  //----> Post Increment
    // printf("%d",a);        //----> Post Increment
    // printf("%d", ++a);    // ----> Pre Iecrement

    // printf("%d \n", a--); //----> Post Decrement
    // printf("%d \n", a);   //----> Post Decrement
    // printf("%d \n", --a);   //----> Pre Decrement

    // int x=4;
    // int y=4 ,c; // Declare by adding 'c'
    // c=x++ + --x;
    // printf("%d",x);

    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if (marks < 40)
    {
        printf("FAIL");
    }
    else if (marks >= 40 && marks < 59)
    {
        printf("GOOD");
    }
    else if (marks >= 59 && marks < 80)
    {
        printf("EXCELLENT");
    }
    else if (marks >= 80)
    {
        printf("OUTSTANDING");
    }
    else
    {
        printf("Thankyou");
    }

    return 0;
}
