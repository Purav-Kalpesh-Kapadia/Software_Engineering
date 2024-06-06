//Documentation Section
/*
Type a program in C to caluclate and print the electricity bill of a given customer. 
The customer ID, name and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.
The charges are as follows:

Units                                                                          Charges

Upto 350                                                                  @01.20
350 and above but less than 600                     @01.50
600 and above but less than 800                     @01.80
800 and above                                                       @02.00

If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256
*/
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
//Declaration Section
int customer_id, customer_name;
float units, total, minimum_bill, bill_exceed;
printf("Enter the customer id: ");
scanf("%d",&customer_id);
printf("Enter the customer name: ");
scanf("%s", &customer_name);
printf("Enter the units consumed: ");
scanf("%f", &units);
if(units>=00.00 && units<=350.00)
{
    total=units*01.20;
    if(total<minimum_bill)
    {
    printf("Bill amount is: ", minimum_bill);
    }
    else
    {
    printf("Bill amount: %f", total);  
    }
}

else if(units>=350.00 && units<=600.00)
{   
    total=units*01.50;
    printf("Bill amount: %f", total);
}
else if(units>600.00 && units<800.00)
{
    total=units*01.80;
    printf("Bill amount: %f", total);
}
else if(units>800.00)
{
    total=units*02.00;
    printf("Bill amount: %f", total);
}
//18.00% on exceed bill payment of Rs.800
else if(total>bill_exceed)
{
total=total+(total*00.18);
printf("Bill amount for above Rs. 800 with 18.00% interest is: %f", total);
}
}