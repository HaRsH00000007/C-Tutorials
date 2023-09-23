// Instructions:

// >>> (1) Type Declaration Instruction ---> Declare variable before using it.
// example:
#include <stdio.h>
int main()
{
    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e;

    int old_age = 35;
    int new_age = old_age;

    int a = b = c = 5;

    return 0;
}

// >>> (2) Aritmettic Instruction.
// example:
// a (Operand 1)    + (Operator)    b (Operand 2) ----> a+b

// Note: Single variable on the LHS.

#include <stdio.h>
#include <math.h>
int main()
{
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = pow(b, c);
    // int power = b^c;
    printf("%d", power);

    return 0;
}

//  Modular Operator '%' : Returns remainder for int:

#include <stdio.h>
int main()
{
    printf("%d \n", 9 % 4);  // --->>> Gives positive remainder.
    printf("%d \n", -6 % 5); // --->>> Gives negative remainder.
    return 0;
}

// >>> (3) Control Instructions: Used to determine flow of programme.
/*
        (a.) Sequence Control
        (b.) Decision Control
        (c.) Loop Control
        (d.) Case Control

*/
