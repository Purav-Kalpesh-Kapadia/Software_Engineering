//Documentation Section
//Type a program to read integer and print first three power
//Linking Section
#include<stdio.h>
void main()
{
int value, value_01, value_02, value_03;
printf("Enter the value: ");
scanf("%d", &value);
value_01=value;
printf("First power: %d", value_01);
value_02=value*value;
printf("\nSecond power: %d", value_02);
value_03=value*value*value;
printf("\nThird power: %d", value_03);
}