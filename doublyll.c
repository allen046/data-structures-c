#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
	
};
struct Node* head;//global variable-pointer to head node
struct Node* Getnewnode(int x)
{
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void Insertathead(int x)
{
	struct Node* newnode=Getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
void Print()
{
	struct Node* temp=head;
	printf("Forward");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	
	printf("\n");
}
void ReversePrint()
{
	struct Node* temp1=head;
	if(temp1==NULL)
		return;//empty list,exit
	//going to last Node
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
//Traversing backward using prev pointer
	printf("Reverse");
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->prev;
	}
	printf("\n");
}

int main()
{
head=NULL;//empty list
Insertathead(2); Print(); ReversePrint();
Insertathead(3); Print(); ReversePrint();
Insertathead(4); Print(); ReversePrint();
}