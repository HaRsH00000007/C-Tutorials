// Print the Sum of First "n" Natural Numbers.
// Print them in reverse order also.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);


    int sum=0;
    for(int i=1; i<=n; i++) {
        sum=sum + i;     // sum + = i
        
         }

    printf("Sum is %d \n", sum);


    for (int i=n; i>=1 ; i--) {
        printf("%d \n", i);
    }


    return 0;

}