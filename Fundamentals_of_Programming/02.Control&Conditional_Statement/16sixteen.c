//Documentation Section
//Type a program to read temperature in centigrade and display a suitable message according to temperature stated below.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    if(temp<=0)
        {
        printf("Freezing weather");
        }
        else if(temp>=0 && temp<=10)
        {
            printf("Very cold weather");
        }
        else if(temp>=10 && temp<=20)
        {
            printf("Cold weather");
        }
        else if(temp>=20 && temp<=30)
        {
            printf("Normal in Temperature");
        }
        else if(temp>=30 && temp<=40)
        {
            printf("It's Hot");
        }
        else if(temp>=40)
        {
            printf("It's  very hot");
        }
        else
        {
            printf("Invalid Input");
        }
    }