//Documentation Section 
//Accept the input month number and print number of days in the month.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
int month_number;
printf("Enter the month number: ");
scanf("%d", &month_number);
switch(month_number)
{
    case 1:
    {
    printf("31 days");
    break;
    }
    case 2:
    {
    printf("28 or 29 days");
    break;
    }
    case 3:
    {
    printf("31 days");
    break;
    }
    case 4:
    {
    printf("30 days");
    break;
    }
    case 5:
    {
    printf("31 days");
    break;
    }
    case 6:
    {
    printf("30 days");
    break;
    }
    case 7:
    {
    printf("31 days");
    break;
    }
    case 8:
    {
    printf("31 days");
    break;
    }
    case 9:
    {
    printf("30 days");
    break;
    }
    case 10:
    {
    printf("31 days");
    break;
    }
    case 11:
    {
    printf("30 days");
    break;
    }
    case 12:
    {
    printf("31 days");
    break;
    }
    default:
    {
    printf("Invalid");
    break;
    }
}
}