/*// Type conversions:

#include <stdio.h>
int main(){
    int a=(int) 1.999999;   // Conversion of float value to int value.
    printf("%d",a);
    return 0;
}*/

// Operator precedence:
#include <stdio.h>
int main()
{
    int a = 4 + 9 * 10;
    printf("%d \n", a);

    int b = 4 * 3 / 8 * 4; // Associativity ---> (for same precedence) from left to right
    printf("%d \n", b);

    int c=5*2-5*3;
    printf("%d \n" , c);

    int d=5*2/2*3;
    printf("%d \n" ,d);

    int e=5*(2/2)*3;
    printf("%e \n", e);
    
    int f=5+2/2*3;
    printf("%f \n", f);
    
    return 0;
}