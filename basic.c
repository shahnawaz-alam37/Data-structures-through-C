#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,opt;
    printf("======BASIC ARITHEMATIC OPERATION======\n");
    printf("\t1.Addition\n");
    printf("\t2.Substraction\n");
    printf("\t3.multiplication\n");
    printf("\t>");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter the two digits for addition:");
        scanf("%d%d",&a,&b);
        printf("SUM = %d",a=a+b);
        break;
    case 2:
        printf("Enter two digits for Substraction:");
        scanf("%d%d",&a,&b);
        printf("difference = %d",a=a-b);
        break;
    case 3:
        printf("enter numbers for multiplication:");
        scanf("%d%d",&a,&b);
        printf("multiple = %d",a=a*b);
        break;
    default:
        break;
    }
    
    getch();
}