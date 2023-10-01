// Q --> Print the factorial of a number " n " .

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf(" %d ", &n);
    
    int fact = 1;
    for(int i=1; i<=n ; i++){
        fact = fact*i;
    }

    printf(" Our Final Factorial is %d", fact);

    return 0;
}