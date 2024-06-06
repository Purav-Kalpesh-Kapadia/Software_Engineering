//Documentation Section
//Program to find and area of the triangle
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
//Area of a triangle Forula: base*height/2
int area_of_triangle, base, height;
printf("Enter the base value: ");
scanf("%d", &base);
printf("Enter the height value: ");
scanf("%d", &height);
area_of_triangle=(base*height)/2;
printf("Area of the Trinagle is: %d", area_of_triangle);
}