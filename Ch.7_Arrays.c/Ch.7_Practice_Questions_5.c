// Q --> Write a program to store the first " n " fibonacci numbers .
//   --> " Fibonacci Sequence " --- 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , _ _ _ _
//   --> n th term = ( n-1 ) + ( n-2 )

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n ( n>2 ) :");
    scanf("%d ", &n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<n; i++){                 // 1 , 2 , 3 , 5 , ....
        fib[i]=fib[i-1] + fib [i-2];        // Important .
        printf("%d \t", fib[i]);
    }
    printf("\n"); 

    return 0;
}
