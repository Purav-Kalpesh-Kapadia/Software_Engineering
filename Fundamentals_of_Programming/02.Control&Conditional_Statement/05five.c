//Documentation Section
//Type a program to check the number is positive or negative.
//Linking Section
#include<stdio.h>
void main()
{
    int value;
    printf("Enter the number to check weather the value is positive or negative: ");
    scanf("%d", &value);
    if(value>=0)
    {
        printf("The value is positive");
    }
    else
    {
        printf("The value is negative");
    }
}