//Documentation Section
//Type a program to accept two numbers and find out its sum check its size
//Linking Section
#include<stdio.h>
void main()
{
    int value_01, value_02, sum;
    printf("Enter the first value: ");
    scanf("%d", &value_01);
    printf("Enter the second value: ");
    scanf("%d", &value_02);
    sum=value_01+value_02;    
    printf("Sum of the two values are: %d", sum);
    printf("\nThe size consumed by a variable of sum is: %d", sizeof(sum));
}