//Documentation Section
/*
Type a program to input basic salary of an employee and calculate its gross salary according to following:
Basic Salary <= 10000 : House Rent Allowance = 20%, Dearness Allowance = 80%
Basic Salary <= 20000 : House Rent Allowance = 25%, Dearness Allowance = 90%
Basic Salary > 20000 : House Rent Allowance = 30%, Dearness Allowance = 95%
*/
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
int salary, house_rent_allowance, dearness_allowance, gross_salary;
printf("Enter the Salary: ");
scanf("%d", &salary);
if(salary<=10000)
{
    house_rent_allowance=salary*0.20;
    dearness_allowance=salary*0.80;
    gross_salary=salary+house_rent_allowance+dearness_allowance;
    printf("Gross Salary: %d", gross_salary);
}
else if(salary<=20000)
{
    house_rent_allowance=salary*0.25;
    dearness_allowance=salary*0.90;
    gross_salary=salary+house_rent_allowance+dearness_allowance;
    printf("Gross Salary: %d", gross_salary);
}
else if(salary>20000)
{
    house_rent_allowance=salary*0.30;
    dearness_allowance=salary*0.95;
   gross_salary=salary+house_rent_allowance+dearness_allowance;
    printf("Gross Salary: %d", gross_salary);
}
}