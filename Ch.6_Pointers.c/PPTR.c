// Pointer To Pointer.

#include<stdio.h>
int main(){
    float price = 100.0;
    float *ptr = &price;        // Normal Variable ka Address --> Stored in Pointer.
    float **pptr = &ptr;        // Pointer Variable ka Address --> Stored in Pointer to Pointer.


    return 0;
}