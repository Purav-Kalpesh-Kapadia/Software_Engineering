//Documentation Section
//Type a program to convert minutes into seconds & hours
//Linking Section
#include<stdio.h>
void main()
{
    //Declaration Section
    float minutes, seconds, hours;
    printf("Enter the minutes: ");
    scanf("%f", &minutes);
    seconds=minutes*60;
    printf("Minute into Seconds conversation is: %f", seconds);
    hours=minutes/60;
    printf("\nMinutes into hours conversation is: %f", hours);
}