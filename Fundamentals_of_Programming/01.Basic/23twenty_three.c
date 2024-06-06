//Documentation Section
//Type a program to calculate swap 2 numbers with using of multiplication and division.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    //Declaration Section
    int value_01, value_02, value_03, value_04;
    printf("Enter the first value: ");
    scanf("%d", &value_01);
    printf("Enter the second value: ");
    scanf("%d", &value_02);
    printf("Before swapping");
    printf("\n First Value: %d", value_01);
    printf("\n Second Value: %d", value_02);
    printf("\nEnter the First value: ");
    scanf("%d", &value_01);
    printf("Enter the Second value: ");
    scanf("%d", & value_02);
    printf("After swapping");
    value_01=value_01*value_02; 
    value_02=value_01/value_02; 
    value_01=value_01/value_02; 
    printf("\n First Value: %d", value_01);
    printf("\n Second Value: %d", value_02);
}