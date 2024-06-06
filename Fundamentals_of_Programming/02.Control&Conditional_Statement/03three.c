//Documentation Section
//Type the program to check if the given year is a leap or not.
//Linking Section
#include<stdio.h>
//Main function
void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%400==0 || year%100!=00  && year%4==0)
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year.");
    }
}