// Q--> Write 2 functions - one to print " Hello " and second to print " Good Bye " .
#include<stdio.h> 

// Declaration / Prototype
void printHello();
void printGood_Bye();


int main(){             // Function Call
    printHello();
    printGood_Bye();
    printHello();

    return 0;
}


// Function Definition
void printHello(){
    printf("Hello \n");
}

void printGood_Bye(){
    printf("Good_Bye \n");
}