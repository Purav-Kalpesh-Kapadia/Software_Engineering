//Documentation section
//Type a program to make a simple caluclator operations include: [i] Addition, (ii) Subtraction, (iii) Multiplication, (iv)Division using conditional statement.
//Linking Section
#include<stdio.h>
void main()
{
    int value_01, value_02, result;
    printf("Enter the first value: ");
    scanf("%d", &value_01);
    printf("Enter the second value: ");
    scanf("%d", &value_02);

if(result=value_01+value_02)
{
    printf("Addition: %d", result);
}
if(result=value_01-value_02)
{
    printf("\nSubtraction: %d", result);
}
if(result=value_01*value_02)
{
    printf("\nMultiplication: %d", result);
}
if(result=value_02/value_01)
{
    printf("\nDivision: %d", result);
}
}