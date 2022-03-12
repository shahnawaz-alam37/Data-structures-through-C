//queue using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int queue[10],data;
int front=0,rare=0,opt;
int main(){
    while (1){
        system("cls");//this is optional
        printf("\nQUEUE OPERATIONS\n");
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:insert();
            break;
        case 2:delete();
            break;
        case 3:display();
            break;
        case 4:exit(1);
            break;
        default:printf("invalid choice");
            getch();
            break;
        }
    }
    getch();
    return 0;
}
void insert(){
    if(rare==10){
        printf("Queue is full\n");
    }
    else{
        system("cls");//this is optional
        printf("Enter data to insert:");
        scanf("%d",&data);
        queue[rare]=data;
        rare++;
    }
}
void delete(){
    int i;
    if (front==rare){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        printf("Deleted element is %d",queue[front]);
        for (i = 0; i < rare-1 ; i++)
        {
            queue[i]=queue[i+1];
        }
        rare--;
    }
    getch();
}
void display(){
    int i;
    system("cls");//this is optional
    printf("printting queue elements..\n");
    for ( i = 0; i < rare; i++){
        printf("%d ",queue[i]);
    }
    getch();   
}