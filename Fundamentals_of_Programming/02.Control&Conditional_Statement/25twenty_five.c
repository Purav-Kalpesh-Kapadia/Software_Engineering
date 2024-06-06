//Documentation Section
/*Type a program to input basic salary of an employee and calculate its gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
//Linking Section
#include<stdio.h>
//Declaration Section
int salary, house_rent_allowance, dearness_allowance;
//Main Function
void main()
{
printf("Enter the salary: ", &salary );
scanf("%d", &salary);
if(salary<=10000)
{
house_rent_allowance=salary*0.20;
dearness_allowance=salary*0.80;
salary=salary+house_rent_allowance+dearness_allowance;
printf("Gross Salary: %d", salary);
}
else if(salary<=20000)
{
house_rent_allowance=salary*0.25;
dearness_allowance=salary*0.90;
salary=salary+house_rent_allowance+dearness_allowance;
printf("Gross Salary: %d", salary);
}
else if(salary>20000)
{
house_rent_allowance=salary*0.30;
dearness_allowance=salary*0.95;
salary=salary+house_rent_allowance+dearness_allowance;
printf("Gross Salary: %d", salary);
}
}