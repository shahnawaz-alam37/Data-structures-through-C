#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void begin_delete();   
void display();  
void search();  
void main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Delete\n3.Search for an element\n4.Show\n5.Exit\n");  
        printf("\nEnter your choice:");         
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            begin_delete();       
            break;   
            case 3:  
            search();         
            break;  
            case 4:  
            display();        
            break;  
            case 5:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }
    getch();  
}  
void beginsert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL){  
        printf("\nOVERFLOW");  
    }  
    else{  
        printf("\nEnter the node data?");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head){  
                temp = temp->next;  
                ptr->next = head;   
                temp -> next = ptr;   
                head = ptr;  
            }
        }   
        printf("\nnode inserted\n");  
    }  
              
}

void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
            while (ptr->next != head)  
            {  
                if(ptr->data == item)  
                {  
                    printf("item found at location %d ",i+1);  
                    flag=0;  
                    break;  
                }   
                else  
                {  
                    flag=1;  
                }  
                i++;  
                ptr = ptr -> next;  
            }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
}  

void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL){  
        printf("\nnothing to print");  
    }     
    else {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head){  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }             
}  