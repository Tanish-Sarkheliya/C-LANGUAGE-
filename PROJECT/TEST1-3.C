#include<stdio.h>
#include<conio.h>
main()
{
	float F,S;
	clrscr();
	printf("Enter first angle:");
	scanf("%f",&F);
	printf("Enter second angle:");
	scanf("%f",&S);
	printf("third angle:%.2f",180-(F+S));


	getch();
}