#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int len;
struct node *root=NULL;
int main(){
    int opt;
    for(;;)
    {
        system("cls");
        printf("SINGLE LINKED LIST\n");
        printf("1.append\n");
        printf("2.insert at begin\n");
        printf("3.Total length\n");
        printf("4.EXIT\n");
        printf("enter your choice:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:append();
            break;
        case 3:len = length();
            getch();
            break;
        case 4:printf("\nterminating program\n");getch();
        exit(1);
        default:
            break;
        }
    }
}
void append(){
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    fflush(stdin);
    system("cls");
    printf("enter NODE data:");
    scanf("%d",&temp->data);
    printf("\nData inserted\n");
    getch();
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        while (p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

int length(){
    struct node * temp;
    int count=0;
    temp=root;
    while (temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("\nTOTAL NO. OF NODES ARE %d\n",count);
    return count;
}