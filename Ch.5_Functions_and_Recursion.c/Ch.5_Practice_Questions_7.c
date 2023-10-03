// Q --> Write functions to calculate area of a square, a circle & a rectangle.

#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float breadth);

int main()
{
    float length = 9;
    float breadth = 20 ;
    float side = 6;
    float radius=14;


    printf("Area of given Square is : %f \n", squareArea(side));
    printf("Area of given Rectangle is : %f \n", rectangleArea(length,breadth));
    printf("Area of given circle is: %f \n", circleArea(radius));

    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float radius)
{
    return 3.14 * radius * radius;
}

float rectangleArea(float length, float breadth)
{
    return length * breadth;
}