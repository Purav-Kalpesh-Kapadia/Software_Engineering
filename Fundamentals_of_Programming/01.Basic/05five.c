//Documentation Section
//Program to find and area of the cube
//Linking Section
#include<stdio.h>
//Area of a cube Forula: A=6a2
//Main Function
void main()
{
    int edge, area_of_cube;
printf("Enter the value of edge: ", edge);
scanf("%d", &edge);
area_of_cube=6*(edge*edge);
printf("Area of Cube: %d", area_of_cube);
}