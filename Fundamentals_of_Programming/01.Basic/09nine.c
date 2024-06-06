//Documentation Section
//Program to find circumference of triangle
//Linking Section
#include<stdio.h>
//Circumference of triangle formula: side01+side02+side03
//Main Function
void main()
{
    int circumference_of_triangle, side01, side02, side03;
    printf("Enter the value of first side: ");
    scanf("%d", &side01);
    printf("Enter the value of second side: ");
    scanf("%d", &side02);
    printf("Enter the value of third side: ");
    scanf("%d", &side03);
    circumference_of_triangle=side01+side02+side03;
    printf("Circumference of triangle: %d", circumference_of_triangle);
}