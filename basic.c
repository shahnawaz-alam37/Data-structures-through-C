#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers to add:");
    scanf("%d%d",&a,&b);
    a=a+b;
    printf("SUM = %d",a);
    getch();
}