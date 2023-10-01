#include <stdio.h>
int main()
{
    // increment operator
    // ++i (Pre Increment)
    // i++ (Post Increment)

    int i = 1;
    printf("%d \n", i++); // first use the value of i and , then increase the value of i.
    printf("%d \n", i);



    printf("%d \n", ++i); // first increase the value of i and , then use the value of i.
    printf("%d \n", i); 

    return 0;
}