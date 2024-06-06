//Documentation Section
//Accept two numbers from users and swap 2 numbers with using 3rd variable and without using 3rd variables.
//Linking Section
#include<stdio.h>
void main()
{
    int value_01, value_02, value_03, value_04, intermediate;
    printf("Enter the value 01: ");
    scanf("%d", &value_01);
    printf("Enter the value 02: ");
    scanf("%d", &value_02);
    //Swapping with 03rd variable
    printf("Swapping 2 number using 03rd variable");
    printf("\nBefore Swapping");
    printf("\nFirst Value: %d", value_01);
    printf("\nSecond Value: %d", value_02);
    printf("\nAfter Swapping");
    intermediate=value_01;
    value_01=value_02;
    value_02=intermediate;
    printf("\nFirst Value: %d", value_01);
    printf("\nSecond Value: %d", value_02);
    //Swapping without 03rd variable
    printf("\nSwapping 2 number without using 03rd variable");
    printf("\nEnter the value 01: ");
    scanf("%d", &value_03);
    printf("\nEnter the value 02: ");
    scanf("%d", &value_04);
    printf("\nBefore Swapping");
    printf("\nFirst Value: %d", value_03);
    printf("Second Value: %d", value_04);
    printf("\nAfter Swapping");
    value_03=value_03+value_04;
    value_04=value_03-value_04;
    value_03=value_03-value_04;
    printf("\nFirst Value: %d", value_03);
    printf("\nSecond Value: %d", value_04);
}