//Documentation Section
//Type a program to convert days into months
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
//Declaration Section
float days, months;
//Definition Section
printf("Enter days: ");
scanf("%f", &days);
months=days/30;
printf("The conversion of days to months is: %f",months);
}