#include<conio.h>
#include<stdio.h>
int main(){
    //==============selection sort================
    int i,j,min,a[20],n,t;
    printf("enter the no.of elements you want to enter:");
    scanf("%d",&n);
    printf("enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        min=i;
        for ( j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("sorted elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;
}