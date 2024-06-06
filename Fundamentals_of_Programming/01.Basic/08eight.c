//Documentation Section
//Program to find circumference of the rectangle
//Linking Section
#include<stdio.h>
//Circumference of a rectangle formula: 4*side
//Main Function
void main()
{
    int side, circumference_of_rectangle;
    printf("Enter the value of  side: ");
    scanf("%d", &side);
    circumference_of_rectangle=4*side;
    printf("Circumfrance of rectangle: %d", circumference_of_rectangle);
}