//Documentation Section
//Program to find Area of Circle & Circumference of Circle
//Linking Section
#include<stdio.h>
//Definition Section
#define PI 3.14159265359
//Main Function
void main()
{
    // Area of Circle, Formula: pie r2
    int radius;
    float area_of_circle, circumference_of_circle;
    printf("Enter the value of radius: ",radius);
    scanf("%d", &radius);
    area_of_circle=PI*radius*radius;
    printf("Area of the circle is: %f", area_of_circle);
    //Circumfrerence of Circle: C=2 pie r
    circumference_of_circle=2*PI*radius;
    printf("\nCircumference of Circle: %f", circumference_of_circle);
}