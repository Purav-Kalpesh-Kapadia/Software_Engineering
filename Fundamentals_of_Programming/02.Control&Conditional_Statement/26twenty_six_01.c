//Documentation Section
//Type a program to input the week number and print week day.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    int week_number;
    printf("Enter the number: ");
    scanf("%d", &week_number);
    switch(week_number)
    {             
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Invalid number");
        break;
    }
}