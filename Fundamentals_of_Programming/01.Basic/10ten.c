//Documentation Section
//Program to find area of rectangle prism.
//Linking Section
#include<stdio.h>
//Formula for area of rectangle prism: 2(Height + width + length)
#include<stdio.h>
//Main Function
void main()
{
int area_of_rectangle_prism, height, width, length;
printf("Enter the value of height: ", height);
scanf("%d", &height);
printf("Enter the value of width: ", width);
scanf("%d", &width);
printf("Enter the value of length: ", length);
scanf("%d", &length);
area_of_rectangle_prism=2*(height+width+length);
printf("Area of rectangle prism: %d", area_of_rectangle_prism);
}