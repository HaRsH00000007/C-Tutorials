#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks < 50)
    {
        printf("Fail \n");
    }
    else if (marks <= 50 && marks < 60)
    {
        printf("Average \n");
    }
    else if (marks <= 60 && marks < 80)
    {
        printf("Good \n");
    }
    else if (marks >= 80)
    {
        printf("Excellent \n");
    }
    else
    {
        printf("Invalid \n");
    }
    return 0;
}