#include<conio.h>
#include<stdio.h>
int main(){
    //==========insertion sort===========
    int key,n,i,j,a[20];
    printf("Enter the no.of elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 1; i < n; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("printing the sorted elements\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;   
}