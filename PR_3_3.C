#include<stdio.h>
#include<conio.h>
void main()
{
 int number,sum,firstdigit,lastdigit;
clrscr();
 printf("Enter any number to find sum of first and last digit:");
 scanf("%d",&
 number);
 //for last digit
 lastdigit=number%10;
 printf("lastdigit %d\n",lastdigit);
 firstdigit=number;
 while (number>=10)
 {
 number =number/10;
 }
 firstdigit=number;
 printf("firstnumber =%d",firstdigit);

 sum=firstdigit+lastdigit;
 printf("Sum of the first and last digit of given number=%d\n",sum);

getch();

}