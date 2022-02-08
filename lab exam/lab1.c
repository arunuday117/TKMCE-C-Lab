#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};

struct node*header,*temp,*newnode,*ptr,*preptr;

void create();
void at_position();

void del_begin();

void search();
void display();

int main(){
    int c = 0,option;
    header = (struct node*) malloc (sizeof(struct node));
    header->link = NULL;
    while(c==0){
        printf("\n----MAIN MENU----\n");
        printf("1.Create linked list\n");
        printf("2.Insert node at middle\n");
        printf("3.Delete node from begining\n");
        printf("4.Search node\n");
        printf("5.Display\n");
        printf("Enter your option : ");
        scanf("%d",&option);
        switch(option){
            case 1 : create();
                     break;
            case 2 : at_position();
                     break;
            case 3 : del_begin();
                     break;
            case 4 : search();
                     break;
            case 5 : display();
                     break;
            default : printf("Invalid operator\n");
        }
        printf("Do you want to continue(0/1) : ");
        scanf("%d",&c);
    }
    return 0;
}

void create(){
    int val;
    ptr=header;
    newnode=(struct node*) malloc (sizeof(struct node));
    printf("Enter the data of the new node : ");
    scanf("%d",&val);
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    newnode->data=val;
    newnode->link=ptr->link;
    ptr->link=newnode;
}

void at_position(){
    int d,val;
    ptr = header;
    newnode = (struct node*) malloc (sizeof(struct node));
    printf("Enter the data of the node after which the new node to be placed : ");
    scanf("%d",&d);
    printf("Enter the data of the node : ");
    scanf("%d",&val);
    while(ptr->link != NULL){
        if(ptr->data == d){
            break;
        }
        ptr =  ptr->link;
    }
    newnode->data = val;
    newnode->link = ptr->link;
    ptr->link = newnode;
}

void del_begin(){
    ptr=header;
    if(ptr->link ==  NULL){
        printf("\nUnderflow\n");
    }
    else{
        ptr = ptr->link;
        header->link = ptr->link;
        printf("Data of node deleted : %d\n",ptr->data);
        free(ptr);
    }
}

void search(){
    ptr = header;
    int key,i = 0,flag = 0;
    printf("Enter the value to be searched : ");
    scanf("%d",&key);
    while(ptr->link != NULL){
        ptr = ptr->link;
        i++;
        if(ptr->data == key){
            printf("%d found at %d \n",key,i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Data not found in list \n");
    }
}

void display(){
    temp = header;
    if(temp->link == NULL){
        printf("Underflow\n");
    }
    else{
        while(temp->link != NULL){
            temp = temp->link;
            printf("%d\t",temp->data);
        }
        printf("\n");
    }
}

