#include<stdio.h>
#include<conio.h>
main()
{
	float HRA, DA, TA, BS, GS;
	clrscr();
	printf("enter the base salary: ");
	scanf("%f",&BS);
	printf("enter HRA:");
	scanf("%f",&HRA);
	printf("enter DA:");
	scanf("%f",&DA);
	printf("enter TA:");
	scanf("%f",&TA);

	printf("salary after benifits:%f",(BS*HRA/100+BS*DA/100+BS*TA/100)+100);


	getch();
}