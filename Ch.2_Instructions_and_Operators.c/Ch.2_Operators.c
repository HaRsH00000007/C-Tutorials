// Operators

/*

( 1.) Arithmetic operators:  +,-,*,/,%

( 2.) Relational operators:== ---> is equal to
                != ---> is not equal to
                >  ---> greater than
                <  ---> less than
                >= ---> greater than or equal to
                <= ---> less than or equal to
                == ---> Equal to


( 3.) Logical Operators:
            1. && (AND) ---> Both conditions should be "true" only then output will be returned as "True".
            2. || (OR)  ---> Only one condition should be "true" after that output will be returned as "True"
            3. !  (NOT) ---> Not operator changes true condition to false condition or false condition to true condition.


(4.) Assignment Operators:
              = , += , -=  , *= , /= , %=

*/

#include <stdio.h>
#include <math.h>
int main()
{

    // (2.) Relational Operators examples.
    printf("%d \n", 9 != 9);
    printf("%d \n", 9 > 3);
    printf("%d \n", 9 < 10);
    printf("%d \n", 5 >= 4);
    printf("%d \n", 2 <= 4);
    printf("%d \n", 4==5);

    // (3.) Logical Operators examples.
    printf("%d \n", 5 > 4 && 9 > 3);

    printf("%d \n", 0 > 7 || 8 > 5 || 9 > 10);

    printf("%d \n", !(79 > 50) );

    printf("%d \n", !((5>2) && (100>98)));
    // (4.) Assignment Operators examples.
    int a=5;
    int b=10;
    a+=b;      // 'a=a+b' can also be written as 'a+=b' .
    printf("%d \n", a);

    a-=b;
    printf("%d \n", a);

    a*=b;      
    printf("%d \n", a);

    a/=b;
    printf("%d \n", a);

    a%=b;
    printf("%d \n", a);
 



    return 0;
}
