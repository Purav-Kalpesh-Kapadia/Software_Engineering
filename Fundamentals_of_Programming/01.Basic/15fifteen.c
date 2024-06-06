//Documentation Section
//Type a program school's name into abbreviate form
//Linking Section
#include<stdio.h>
void main(){
char first[5]="Saint";
char second[10]="Joseph";
char third[10]="English";
char fourth[10]="Teaching";
char fifth[10]="High";
char sixth[10]="School";
//printf("Abbreviate Name: ");
printf("%c%c.%s %c.%c.%s %s", first[0], first[4], second, third[0], fourth[0], fifth,sixth);
}