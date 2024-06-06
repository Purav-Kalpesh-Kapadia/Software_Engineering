//Documentation Section
//Type a program to show voewl using switch case
//Linking Section
#include<stdio.h>
void main()
{
    char vowel;
    printf("Enter the character to check is it voewl or not: ");
    scanf("%c", &vowel);
    switch(vowel)
    {
        case 'a':
        printf("It is a voewl");
        break;

        case 'e':
        printf("It is a voewl");
        break;

        case 'i':
        printf("It is a voewl");
        break;

        case 'o':
        printf("It is a vowel");
        break;

        case 'u':
        printf("It is a vowel");
        break;

        case 'A':
        printf("It is a voewl");
        break;

        case 'E':
        printf("It is a voewl");
        break;

        case 'I':
        printf("It is a voewl");
        break;

        case 'O':
        printf("It is a vowel");
        break;

        case 'U':
        printf("It is a vowel");
        break;

        default:
        printf("It is not a vowel");
        break;
    }   
}