//Documentation Section
//Type a program to find number is even or odd using ternary operator.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
int value;
printf("Enter the value: ");
scanf("%d", &value);
(value%2==0)?printf("Even"):printf("Odd");
}