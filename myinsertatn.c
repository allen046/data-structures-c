#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
}Node;
struct Node* head;//global variable
void print();
void insertatn(int n, int pos);
int main()
{
	head=NULL;
	int n,pos,x,i;
	printf("Enter the limit");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the position");
	scanf("%d",&pos);
	insertatn(n,pos);
	print();
	}
}
void insertatn(int n, int pos)
{
	int i;
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=n;
	temp1->next=NULL;
	if(pos==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	struct Node* temp2=head;
	for(i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void print()
{
	struct Node* temp=head;
	printf("The List is:");
	while(temp!=NULL)
	{
		
		printf("%d \t", temp->data);
		temp=temp->next;

	}
	printf("\n");
}