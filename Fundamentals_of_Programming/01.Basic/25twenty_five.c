  //Documentation Section
  //Type a program to accept 05 expenses from user and find average of expenses
  //Linking Section
  #include<stdio.h>
  int boxing_gloves, punching_bag, abodo, hand_strip, footwear, average_expenses;
//Main Function
void main()
{
printf("Boxing gloves charges: ");
scanf("%d", &boxing_gloves);
printf("Punching Bag: ");
scanf("%d", &punching_bag);
printf("Abdo: ");
scanf("%d", &abodo);
printf("Hand Strip: ");
scanf("%d", &hand_strip);
printf("Footwear: ");
scanf("%d", &footwear);
average_expenses=(boxing_gloves+punching_bag+abodo+hand_strip+footwear)/5;
printf("Average Expenses: %d", average_expenses);
}