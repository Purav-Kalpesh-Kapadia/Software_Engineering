//Documentation Section
//Type a program to accept monthly salary from the user and deduct 10.00% insurance premium, 10.00% loan installment. Find out of remaining salary.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    //Declaration Section
    float salary, remaining_salary, insurance_premium, loan_installment;
    //Initialization Section
    insurance_premium= 0.10, loan_installment=0.10;
    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    insurance_premium=salary * 0.1;
    loan_installment=salary*0.1;
    remaining_salary=salary-insurance_premium-loan_installment;
    printf("Remaining salary: %f", remaining_salary);
}