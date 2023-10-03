// Q --> Print " Hello World" 5 times.
#include<stdio.h>

void printHW (int count);

int main(){
    printHW(5);
    
    return 0;
}


// Recursive functions:

void printHW(int count){
    if (count==0){
        return ;
    }
    printf ("Helloworld\n");
    printHW(count-1);
}
