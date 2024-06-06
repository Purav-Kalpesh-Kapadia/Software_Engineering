//Documentation Section
//Type a program to check weather two integers are equal or not.
//Linking Section
#include<stdio.h>
void main()
{
    //Declaration Section
    int value_01, value_02;
    //Definition Section
    printf("Enter the first value: ");
    scanf("%d", &value_01);
    printf("Enter the second value: ");
    scanf("%d", &value_02);
    if(value_01 == value_02)
    {
        printf("The value is same");
    }
    else
    {
        printf("The value is different");
    }
}