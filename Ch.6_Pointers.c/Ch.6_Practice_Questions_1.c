// Q --> Find the Output.

#include <stdio.h>
int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x=0

    printf("x= %d \n", x);      // --> 0
    printf("*ptr=%d \n", *ptr); // --> 0

    *ptr += 5; // x=5

    printf("x=%d \n", x);       // x=5
    printf("*ptr=%d \n", *ptr); // x=5

    (*ptr)++; // *ptr = *ptr + 1   --> 6

    printf("x=%d \n ", x);    // -->6
    printf("*ptr=%d ", *ptr); // -->6

    return 0;
}