// #Check whether a person is Adult or Not ?  *********************************************

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age Bro: \n");
    scanf("%d", &age);


    if (age >18)
    {
        printf("You are an Adult \n");
        printf("You are eligible for voting \n");
        printf("You can drive \n");
        printf("You can enjoy your Life \n");
    }

    else
    {
        printf("You are not an adult");
    }
    
    return 0;
}