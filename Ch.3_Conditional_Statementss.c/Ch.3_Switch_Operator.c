#include <stdio.h>
int main()
{
    char day; // M-->MON, T-->TUE, W-->WED......And so on
    printf("Enter day (M-S): \n");
    scanf("%s", &day);

    switch (day)
    {
    case 'M':
        printf("Monda \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'W':
        printf("Wednesday \n");
        break;
    case 'T':
        printf("Thursday \n");
        break;
    case 'F':
        printf("Friday \n");
        break;
    case 'S':
        printf("Saturday \n");
        break;
    case 's':
        printf("Sunday \n");
        break;
    default:
        printf("It's a Holiday \n");
    }
}