// Q --> Create a String firstName & lastName to store details of user & print all the characters using a loop .

#include <stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[] = "Harsh";
    char lastName[] = "Singh";

    printString(firstName);
    printString(lastName);
    return 0;
}


void printString(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}