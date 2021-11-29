#include<stdio.h>
#include<conio.h>
#define max 50
int main()
{
    //=====================linear  search================
    int arr[max];
    int a,i=0,n,found;
    printf("how many elements you want to enter:");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&a);
    fflush(stdin);
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==a){
            printf("found at index %d in array\n",i+1);
            found=1;
        }
    }
    if(found!=1){
            printf("search failed");
        }
    getch();    
}