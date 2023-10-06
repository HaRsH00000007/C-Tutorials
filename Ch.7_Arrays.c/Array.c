#include <stdio.h>
int main()
{
    int marks[3];

    printf("enter your marks of Physics : ");
    scanf("%d", &marks[0]);

    printf("enter your marks of Chemistry: ");
    scanf("%d", &marks[1]);

    printf("enter your marks of Maths: ");
    scanf("%d", &marks[2]);

    printf("phy =%d, chem =%d, math =%d ", marks[0] , marks[1], marks[2]);

    return 0;
}