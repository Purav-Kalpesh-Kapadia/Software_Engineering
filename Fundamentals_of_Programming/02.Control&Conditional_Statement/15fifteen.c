//Documentation Section
/*Type a program to determine eligibility for admission to a professional course based on the following criteria:
Eligible Criteria: [i] Marks in Maths >=65, [ii] Marks in Physics>=55, [iii] Marks in Chemistry>=50 and Total in all three subjects >=190 or 
Total in maths and physics >=140. Input marks obtained in physics: 65, Input marks obtained in Chemistry: 51, Input marks obtained in Mathematics: 72, 
Total marks of Maths, Physics, and Chemistry is 188. Total marks of Maths and Physics: 137. The candidate is not eligible.*/
//Linking Section
#include<stdio.h>
//Main Function
void main()
{
int mathematics, physics, chemistry, total, total_MP;
printf("Enter the physics marks: ");
scanf("%d", &physics);
printf("Enter the chemistry marks: ");
scanf("%d", &chemistry);
printf("Enter the mathematics marks: ");
scanf("%d", &mathematics);
total=physics+chemistry+mathematics;
total_MP=mathematics+physics;
if(physics>=55 && chemistry>=50 && mathematics>=65 && total>=190 || total_MP>=140)
{
    printf("You are eligible for admission");
}
else
{
   printf("You are not eligible for admission.");
}
}