//Documentation Section
//Program to find area of the rectangle
//Linking Section
#include<stdio.h>
//Area of rectangle formula: length*width
//Main Function
void main()
{
int area_of_rectangle, length, width;
printf("Enter the value of length: ");
scanf("%d", &length);
printf("Enter the value of width: ");
scanf("%d", &width);
area_of_rectangle=length*width;
printf("Area of Rectangle: %d",area_of_rectangle);
}