#include<stdio.h>
#include<conio.h>
void main()
{
 int number,count=0;
clrscr();
printf("Please Enter any number:");
scanf("%d",number);
while (number>0)
{
number=number/10;
count++;
}
printf("\n Number of digits in given number =%d",count);


getch();

}