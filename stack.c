#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int opt,temp,top=-1,a[10],data;
int main()
{
    while (opt!=4)
    {
        printf("\n\n1.push elements\n");
        printf("2.pop/delete elements\n");
        printf("3.display all the elements\n");
        printf("4.quit\n");
        printf("enter your choice:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        }
    }
}
void insert(){
    if (top==9)
    {
        printf("stack is full");
    }
    else{
        printf("\nenter the data:");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
}
void delete(){
    if (top==-1)
    {
        printf("stack is empty");
    }
    else{
        temp=a[top];
        top--;
        printf("deleted element is %d",temp);
    }
}

void display(){
    int i;
    if (top==-1)
    {
        printf("stack is empty");
    }
    else{
        printf("elements are....\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n",a[i]);
        }
    }
}