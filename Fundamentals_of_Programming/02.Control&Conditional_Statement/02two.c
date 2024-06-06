//Documentation Section
//Type a program to read the value of an integer m and display the value of m is 1 when m is larger then 0, 0 when m is 0 and -1 when m is less than 0.
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    int m;
    printf("Enter the value: ");
    scanf("%d", &m);

    if(m>0)
    {
        printf("1");
    }
    else if (m=0)
    {
        printf("0");
    }
    else
    {
    printf("-1");
    }
}