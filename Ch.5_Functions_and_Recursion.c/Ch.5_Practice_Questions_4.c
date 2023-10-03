#include <stdio.h>

void printTable();

int main()
{
    int n;
    printf("Enter a number \n ");
    scanf("%d", &n);

    printTable(n); // here " n " is known as " Argument / Actual parameter "
    return 0;
}

void printTable(int n){     // here " n " is known as " Parameter / Formal parameter "
    for (int i=1;i<=10;i++){
        printf("%d  \n",i*n);
    }
}

