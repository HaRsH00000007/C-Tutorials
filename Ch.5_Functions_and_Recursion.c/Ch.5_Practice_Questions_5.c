/*
    NOTE:

    (a.) Function can only return one value at a time.

    (b.) Changes to parameters in function don't change the values in calling function.
         Because a copy of argument is passed to the function.



    Q--> Create a function for calculating Price with GST . (point (b.) explained in this question ).



-->>Whatever we change in our Parameter(Function) that will not reflect in our Argument(Calling Function)
    Because a copy of argument is passed to the function.


*/

#include <stdio.h>

void calculatePrice(float value);

int main()
{
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f \n", value);  // Argument
    return 0;
}

void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("final price is : %f \n", value);        // Parameter
}