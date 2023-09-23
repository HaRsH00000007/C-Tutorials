#include <stdio.h>
int main(){
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);

    if (age>90)
    {
        printf("Old \n");
    }

    if (age<=90 && age>=60)
    {
        printf("Not Old Yr");
    }

    else if(age<=60 && age>=20)
    {
        printf("ADULT");
    }
    else if(age<=20)
    {
        printf("CHILD");
    }
    else
    {
        printf("THANKYOU");
    }
}