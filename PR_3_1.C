//Prdogramme to write a-z skipping 3 char

#include<stdio.h>
#include<conio.h>
void main()
{
   char ch='A';
clrscr();
	do
	{
	printf("%c",ch);
	ch+=4;
	}
	while (ch<='Z')	;


  getch();
	}
