//Documentation Section
//Type a program to accept month number and display month name.
//Linking Section
#include<stdio.h>
void main()
{
    int month_number;
    char month_name;
    printf("Enter the month number: ");
    scanf("%d", &month_number);
    switch(month_number)
    {
        case 1:
        {
        printf("January");
        break;
        }
        case 2:
        {
        printf("February");
        break;
        }
        case 3:
        {
        printf("March");
        break;
        }
        case 4:
        {
        printf("April");
        break;
        }
        case 5:
        {
        printf("May");
        break;
        }
        case 6:
        {
        printf("June");
        break;
        }
        case 7:
        {
        printf("July");
        break;
        }
        case 8:
        {
        printf("August");
        break;
        }
        case 9:
        {
        printf("September");
        break;
        }
        case 10:
        {
        printf("October");
        break;
        }
        case 11:
        {
        printf("November");
        break;
        }
        case 12:
        {
        printf("December");
        break;
        }
        default:
        {
            printf("Invalid");
        }
    }
}