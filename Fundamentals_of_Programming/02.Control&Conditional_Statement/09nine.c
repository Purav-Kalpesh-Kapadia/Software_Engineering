//Documentation Section
//Type a C Program to check uppercase or lowercase or digit or special character
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
    char ch;
    printf("Enter the character or symbol: ");
    scanf("%c", &ch);
if(ch>=65 && ch<=90)
{
    printf("It is Upper Case Character");
}
else if(ch>=48 && ch<=57)
{
    printf("It is a digit");
} 
else if(ch>=97 && ch<=122)
{
    printf("It is Lower Case Character");
}
else
{
    printf("It is Special Symbol");
}
}