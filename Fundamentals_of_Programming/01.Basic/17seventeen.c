//Documentation Section
//Type a program to calculate a persons insurance premium based on salary
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    //Declaration Section
    int salary;
    float interest;
    printf("Enter the salary: ");
    scanf("%d", &salary);
    interest=salary*0.1;
    printf("Insurance Premium: %f", interest);
}