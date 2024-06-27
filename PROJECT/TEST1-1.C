#include<stdio.h>
#include<conio.h>
main()
{
	float c;
	clrscr();
	printf("Enter the temperature in C: ");
	scanf("%f",&c);
	printf("Output in F:%.2f",(9*c)/5+32);
	getch();
}