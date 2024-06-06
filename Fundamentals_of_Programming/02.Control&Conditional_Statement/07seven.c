//Documentation Section
//Type a program to accept marks from user and check pass or fail.
//Linking Section
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks>=31&&marks<=100)
    {
        printf("Pass");
    }
    else if(marks >=0&&marks<=30)
    {
        printf("Failed");
    }
    else
    {
        printf("Invalid");
    }
}