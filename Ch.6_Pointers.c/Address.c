#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    // Printing Address
    printf("%p \n", &age);         // " %p " --> Pointer Address  (Gives "Hexadecimal" value) .
    printf("%u \n" , &age);        // " %u " --> Unsigned int.

    printf("%u \n", ptr);          // Printing value of " ptr " .

    printf("%u \n", &ptr);         // Printing Address of " ptr " .


    // Printing Value
    printf("%d \n " , age);
    printf("%d \n " , *ptr);
    printf("%d \n "  , *(&age));

    return 0;
}