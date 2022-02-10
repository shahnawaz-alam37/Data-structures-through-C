#include<stdio.h>
#include<conio.h>
int main(){
    //===============bubble sort===================
    int i,j,temp,a[10],n;
    printf("enter the no. of elements you want to enter to search:");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j <n; j++)
        {
            if (a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }   
        }
    }
    printf("priting sorted elements\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}