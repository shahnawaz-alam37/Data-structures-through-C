#include<conio.h>
#include<stdio.h>
int main(){
    //==========insertion sort===========
    int temp,n,i,j,a[20];
    printf("Enter the no.of elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 1; i < n; i++)
    {
        j=i;
        while (j>=1)
        {
            if (a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j=j-1;
        }
    }
    printf("printing the sorted elements\n");
    for (i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }   
}