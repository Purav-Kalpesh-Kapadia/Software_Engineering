//Documentation Section
/*Calculate compound interest  [Compound Interest Formula]
a. Formula to calculate coumpound interest anually is given by: Amount=P(1+R/100)t
b. Compound Interest=Amount - P */
// Linking Section
#include <stdio.h>
#include<math.h>
//Main Function
void  main()
{
    //Delaration Section
    float principal_amount, years, compound_interest, rate_of_interest, CI;
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);
    printf("Enter the rate of Interest: ");
    scanf("%f", &rate_of_interest);
    printf("Enter the number of years: ");
    scanf("%f", &years);
    //Definition Section
    compound_interest =principal_amount*((1+rate_of_interest)/100)*years;
    printf("The compound interest: %f", compound_interest);
    CI=compound_interest - principal_amount;
    printf("\nCompund Interest: %f", CI);
    }