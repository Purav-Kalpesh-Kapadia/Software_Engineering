//Documentation Section
//Type a program to find largest of three numbers.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    int a, b, c;
    printf("Enter the value: ");
    scanf("%d",& a);
    printf("Enter the value: ");
    scanf("%d", &b);
    printf("Enter the value: ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("A is greater");
    }
    else if(b>a && b>c)
    {
    printf("B is greater");
    }
    else if(c>a && c>b)
    {
    printf("C is greater");
    }
    else
    {
    printf("All are equal numbers");
    }
}