#include<stdio.h>
#include<stdlib.h>

struct tree
{
	struct node*left;
	int data;
	struct node*right;
};

struct tree*header,*temp,*newnode,*ptr,*preptr;
void insert();
void preorder();
void inorder();
void postorder();
int main()
{
	int c=0,option;
	header=(struct node*)malloc(sizeof(struct node));
	header->left=NULL;
	header->right=NULL;
	printf("\n**** Doubly Linked List ****\n");
	while(c==0)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Insert\n");
		printf("2. preorder\n");
		printf("3. inorder\n");
		printf("4. postorder\n");
	    printf("Enter your option : ");
	    scanf("%d",&option);
		switch(option)
		{
		case 1:insert();
			break;
		case 2:preorder();
			break;
		case 3:inorder();
			break;
		case 4:postorder();
			break;
		default:printf("Invalid Operator");
		}
		printf("Do you want to continue(0/1) : ");
		scanf("%d",&c);
	}
	return 0;
}

void insert()
{
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->prev=header;
	newnode->next=header->next;	
	header->next=newnode;
}

void preorder()
{
	
}

void inorder()
{

}

void postorder()
{
	
}

