// Q --> Write a program to enter price of 6 items & print their " final cost " with gst.

#include <stdio.h>

int main()
{
    float price[6];
    printf("Enter 6 prices :");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    scanf("%f", &price[3]);
    scanf("%f", &price[4]);
    scanf("%f", &price[5]);

    printf("Total price of 1st product is: %f \n", price[0] + (0.18 * price[0]));
    printf("Total price of 2nd product is: %f \n", price[1] + (0.18 * price[1]));
    printf("Total price of 3rd product is: %f \n", price[2] + (0.18 * price[2]));
    printf("Total price of 4th product is: %f \n", price[3] + (0.18 * price[3]));
    printf("Total price of 5th product is: %f \n", price[4] + (0.18 * price[4]));
    printf("Total price of 6th product is: %f \n", price[5] + (0.18 * price[5]));

    return 0;

}