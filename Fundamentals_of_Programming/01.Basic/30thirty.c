//Documentation Section
//Type a program to convert years into days and days into years.
//Linking Section
#include<stdio.h>
void main()
{
    float days, years;
    printf("Enter years: ");
    scanf("%f", &years);
    days= years*365;
    printf("Conversion of years to days: %f", days);
    printf("\nEnter days: ");
    scanf("%f", &days);
    years=days/365;
    printf("Conversion of days into years: %f", years);
}