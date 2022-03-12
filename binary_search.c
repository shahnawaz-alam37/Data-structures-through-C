#include<stdio.h>
void main(){
    int n,found=0,s,i,low,high,mid;
    printf("enter the number of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search \n");
    scanf("%d",&s);
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (s<a[mid])
        {
                 high=mid-1;
        }
        else if (s>a[mid])
        {
           low=mid+1;
        }
        else if (s==a[mid])
        {
           printf("element is found and it is on location %d",mid+1);
           found=1;
           break;
        }
        else if (!found)
        {
            printf("element not found");
        }
    }
    getch();
}
    