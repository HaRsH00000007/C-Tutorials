//  Q--> Keep taking numbers as input from user until user enters a number wich is multiple of 7.

#include <stdio.h>
int main()
{
    int n;

    do
    {
        printf("Enter your number : \n");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 7 == 0)
        { // multiple of 7
            break;
    }
    } while(1);
        printf("Thanks Guys \n");


        return 0;
        }
