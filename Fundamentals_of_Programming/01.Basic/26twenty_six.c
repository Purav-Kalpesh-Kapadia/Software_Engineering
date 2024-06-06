//Documentation Section
//Type a program to Convert Fahrenheit to Celcius
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    float fahrenheit, celcius;
    printf("Enter the value of fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("\nConversion value of Fehrenheit to Celcius is: %f", celcius);
}