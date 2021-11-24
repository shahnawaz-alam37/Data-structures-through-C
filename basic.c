#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,*p,*q;
    p=&a;q=&b;
    printf("Enter two numbers to add:");
    scanf("%d%d",&a,&b);
    *p=*p+*q;
    printf("SUM = %d\n");
    printf("Address of Sum = %u\n",p);
    printf("addres of first digit = %u",&a);
    getch();
}