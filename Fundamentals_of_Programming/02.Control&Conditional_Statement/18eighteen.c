//Documentation Section
//Type a program to calculate profit & loss on a transaction
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    int cost_price, selling_price;
    printf("Enter the cost price: ");
    scanf("%d", & cost_price);
    printf("Enter the selling price: ");
    scanf("%d", & selling_price);
    if(selling_price > cost_price)
    {
        printf("Profit");
    }
    else if(selling_price<cost_price)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit, No Loss");
    }
}