//Documentation Section
//Type a C Program to check weather a triangle can be formed with the given values for the angle.
//Linking Section
#include<stdio.h>
//Main function
void main()
{
    //isosceles, equilateral, scalene, 
    int angle, obtuse, acute, right;
    printf("Enter the angle values between 0 to 180 degree: ");
    scanf("%d", &angle);
    if(angle<90)
    {
        printf("Acute angle");
    }
    else if(angle ==90)
    {
        printf("Right angle");
    }
    else if(angle>90)
    {
        printf("Obtuse angle");
    }
}