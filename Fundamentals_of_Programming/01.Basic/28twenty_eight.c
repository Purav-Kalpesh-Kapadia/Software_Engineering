//Documentation Section
//Convert years into days and months
//Linking Section
#include<stdio.h>
void main()
{
    //Declaration Section
    int years, months, days;
    printf("Enter the year: ");
    scanf("%d", &years);
    //Definition Section
    months=years*12;
    printf("Conversion of year to month is: %f", months);
    days=years*365;
    printf("\nConversion of year to days is: %f", days);
}