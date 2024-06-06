//Documentation Section
//Type a program to calculate persons annual salary
//Linking Section
#include<stdio.h>
void main()
{
    //Declaration Section
    int salary, basic_salary, house_rent_allowace, leave_travell_allowance, special_allowance, bonuses;
    //Definition Section
    printf("Enter basic salary: ", basic_salary);
    scanf("%d", &basic_salary);
    printf("Enter house rental allowance: ", house_rent_allowace);
    scanf("%d", &house_rent_allowace);
    printf("Enter leave travell allowance: ", leave_travell_allowance);
    scanf("%d", &leave_travell_allowance);
    printf("Enter special allowance: ", special_allowance);
    scanf("%d", &special_allowance);
    printf("Enter bonus: ", bonuses);
    scanf("%d", &bonuses);
salary=(basic_salary+house_rent_allowace+leave_travell_allowance+special_allowance+bonuses)*12;
printf("Annual salary of a person: %d", salary);
}