// Print the numbers from 0 to n , if n is given by user .
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);


    /*int i=0;
    while (i<=n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
    */

   for(int i=0; i<=n; i++){         // Printing same code using "For" Loop. 
    printf("%d \n", i);
   }

   return 0;
}