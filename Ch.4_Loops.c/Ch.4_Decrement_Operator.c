#include<stdio.h>
int main(){
    // Decrement Operator
    // --i  (Pre Decrement)
    // i--  (Post Decrement)

    int i=1;


    printf("%d \n", i--); // first use the value of i and , then decrease the value of i.
    printf("%d \n", i);



    printf("%d \n", --i); // first decrease the value of i and , then use the value of i.
    printf("%d \n", i); 

    return 0;

}