//Documentation Section
//Type a program to convert Kilometers in to meters
//Linking Section
#include<stdio.h>
void main()
{
//Declaration Section
int kilometer, meters;
//Definition Section
printf("Enter the kilometer value:");
scanf("%d", &kilometer);
meters=kilometer*1000;
printf("Kilometer to meter conversion is: %d", meters);
}