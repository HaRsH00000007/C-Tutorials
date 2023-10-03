// Q--> Write a function that prints " Namaste " if user is Indian & Bonjour if user is French .

#include <stdio.h>

void Namaste_Jay_Shree_Ram();
void Bonjour();

int main()
{
    printf("Enter f for french & i for indian :");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        Namaste_Jay_Shree_Ram();
    }
    else
    {
        Bonjour();
    }

    return 0;
}

void Namaste_Jay_Shree_Ram(){
    printf("Namaste_Jay_Shree_Ram \n");
}

void Bonjour(){
    printf("Bonjour \n");
}
