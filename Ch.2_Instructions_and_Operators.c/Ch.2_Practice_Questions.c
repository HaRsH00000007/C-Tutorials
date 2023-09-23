/* Q.1> Write a programme to check if a number is divisible by 2 or not ?  ***********************
   Q.2> Write a programme to ceck whether a given number is even or odd ? *******************************
   Q.3> Are these following statements valid or not ?
           int z=8^8            ---> Valid
           int f; int g=f;      ---> Valid
           int x,y=x;           ---> *********************************************************************
           char stars='**';     ---> Invalid
    Q.4> Print 1(True) or 0(False) for following statements:
         (a.) if it's sunday & it's snowing --->  True
         (b.) if it's monday or it's raining ---> True
         (c.) if a number is greater than 9 & less than 100 ---> True **********************************************************
              ( # cecking whether a 2 digit number exists or not)
 */

#include <stdio.h>
int main()
{
    // Ans.1 + Ans.2
    //  Odd case--->  1
    //  Even case---> 0
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);

    // Ans.3
    int z = 8 ^ 8; // This statement doesn't gives power but it's a valid statement.
    int f;
    int g = f;
    int x, y = x;
    // char stars = '**'; // This gives error because of multiple characters.

    // Ans.4

    //(a)
    int is_sunday = 1;
    int is_snowing = 1;
    printf("%d \n", is_sunday && is_snowing);

    // (b)
    int is_monday = 0;
    int is_raining = 1;
    printf("%d \n", is_monday || is_raining);

    //(c)
    int r;
    printf("Enter a number : \n");
    scanf("%d", r > 9 && r < 100);

    return 0;
}