#include<stdio.h>
int main()
{

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a>0)
    {
        printf("POSITIVE");
    }
    else if (a==0)
    {
        printf("NEUTRAL");
    }
    else
    {
        printf("NEGATIVE");
    }
    
}