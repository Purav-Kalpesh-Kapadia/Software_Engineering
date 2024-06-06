//Documentation Section
//Program for Simple calculator
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    int a, b, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    result=a+b;
    printf("Addition: %d", result);
    result=a-b;
    printf("\nSubraction: %d ", result);
    result=a*b;
    printf("\nMultiplication: %d", result);
    result=a/b;
    printf("\nDivison: %d", result);
    result=a%b;
    printf("\nModule: %d", result);
}