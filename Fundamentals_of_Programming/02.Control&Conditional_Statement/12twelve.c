//Documentation Section
//Type a program to find maximum number of three numbers using ternary operator.
//Linking Section
#include<stdio.h>
void main()
{
int value_01, value_02, value_03;
printf("Enter the first number: ");
scanf("%d", &value_01);
printf("Enter the number: ");
scanf("%d", &value_02);
printf("Enter the number: ");
scanf("%d", &value_03);
(value_01>value_02&&value_03|| value_02>value_01&&value_03||value_03>value_02&&value_01) ? printf("%d", value_01||"%d", value_02||"%d", value_03 ) : printf("Invalid");
}