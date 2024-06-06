//Documentation Section
//Type a program accept 5 employees name, salary, count average, total salary.
//Linking Section
#include<stdio.h>
//Main Method
void main()
{
    int salary_01, salary_02, salary_03, salary_04, salary_05, average_salary, total_salary;
    char employee_01, employee_02, employee_03, employee_04, employee_05;
    printf("Enter the employee name: ");
    scanf("%s", &employee_01); 
    printf("Enter the first employees salary: ");
    scanf("%d", &salary_01);
    printf("Enter the employee name: ");
    scanf("%s", &employee_02);
    printf("Enter the second employees salary: ");
    scanf("%d", &salary_02);
    printf("Enter the employee name: ");
    scanf("%s", &employee_03);
    printf("Enter the third employees salary: ");
    scanf("%d", &salary_03);
    printf("Enter the employee name: ");
    scanf("%s", &employee_04);
    printf("Enter the fourth employees salary: ");
    scanf("%d", &salary_04);
    printf("Enter the employee name: ");
    scanf("%s", &employee_05);
    printf("Enter the fifth employees salary: ");
    scanf("%d", &salary_05); 
    average_salary=(salary_01+salary_02+salary_03+salary_04+salary_05)/5;
    printf("Average Salary: %d", average_salary);
    total_salary=salary_01+salary_02+salary_03+salary_04+salary_05;
    printf("\nTotal Salary: %d", total_salary);
}