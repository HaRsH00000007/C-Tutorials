
// Nested If Else Condition:

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a num \n");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("num is Positive \n");
        if (num % 2 == 0)
        {
            printf("num is Even");
        }
        else
        {
            printf("num is Odd");
        }
    }

    else
    {
        printf("num is Negative \n");
    }
    return 0;
}