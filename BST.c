#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;     
};
struct node *root = NULL;
int d,i;
void insert(int d){
    struct node * t,*p; //temporary pointer
    t = (struct node*)malloc(sizeof(struct node));
    t->data=d;
    t->left=NULL;
    t->right=NULL;
    p=root;
    if (root==NULL){
        root=t;
    }
    else{
        struct node*curr;
        curr=root;
        while (curr){
            p=curr;
            if (t->data>curr->data){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
            
        }
        if (t->data>p->data){
            p->right=t;
        }
        else{
            p->left=t;
        }
    }
}
int inorder(struct node*t){
    if (t->left){
        inorder(t->left);//getting error in the display
    }
    printf("%d",t->data);
    if(t->right){
        inorder(t->right);
    }
}
int main(){
    struct node *t;
    int opt;
    while (1){
        printf("BINARY SEACH TREE\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Exit\n");
        printf("enter your choice:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            printf("Enter data to insert:");
            scanf("%d",&d);
            insert(d);
            break;
        case 2:inorder(t);
            break;
        case 3:exit(1);
            break;
        default:printf("invalid choice\n");
            break;
        }
    }
    return 0;
}