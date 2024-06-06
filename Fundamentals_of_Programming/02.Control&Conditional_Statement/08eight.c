//Documentation Section
//Type a program to accept the height of a person in centimeters and categorize the person according to their height.
//Linking Section
#include<stdio.h>
void main()
{
    int centimeter;
    printf("Enter the height in centimeter: ");
    scanf("%d", &centimeter);
    if(centimeter >=68&&centimeter<=170)
    {
        printf("Small");        
    }
    else if(centimeter >=171&& centimeter<=179)
    {
        printf("Average");
    }
    else if(centimeter >=180&& centimeter<=198)
    {
        printf("Tall");
    }
    else if(centimeter >=199 && centimeter<=274)
    {
        printf("Tallest");
    }
    else
    {
        printf("Invalid");
    }
}