//Documentation Section
//Type a program to accept the number of students from user. I need to give 05 apples to each student. How many apples are required?
//Linking Section
#include<stdio.h>
//Main function
void main()
{
int student, apple=5, count;
printf("Enter the number of students: ", student);
scanf("%d", &student);
printf("Student: %d", student);
count=student*apple;
printf("\nTotal apples required are: %d", count);
}