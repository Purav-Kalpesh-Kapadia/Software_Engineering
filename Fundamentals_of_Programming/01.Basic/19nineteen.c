// Documentation Section
// Type a program to calculate compound interest
// Linking Section
#include <stdio.h>
//Main Function
void  main()
{
    //Delaration Section
    float principal_amount, years, compound_interest, rate_of_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);
    printf("Enter the rate of Interest: ");
    scanf("%f", &rate_of_interest);
    printf("Enter the number of years: ");
    scanf("%f", &years);
    compound_interest =principal_amount*((1+rate_of_interest)/100)*years;
    printf("The compound interest is: %f", compound_interest);
    }