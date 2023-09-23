// Write a programme to find if a character entered by user is Upper case or Not.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case \n");
    }
    else if (ch >= 'A' && ch <= 'z')
    {
        printf("Upper Case \n");
    }
    else
    {
        printf("Not English Letter \n");
    }
    return 0;
}