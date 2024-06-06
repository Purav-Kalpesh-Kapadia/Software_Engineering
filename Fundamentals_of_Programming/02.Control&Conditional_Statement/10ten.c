//Documentation Section
//Type a program to check the number is positive or negative or zero
//Linking Section
#include<stdio.h>
void main()
{
    int value;
    printf("Enter the number to check weather the value is positive or negative or zero: ");
    scanf("%d", &value);
    if(value>0)
    {
        printf("The value is positive");
    }
    else if(value<0)
    {
        printf("The value is negative");
    }
    else
    {
        printf("The value is zero");
    }
}