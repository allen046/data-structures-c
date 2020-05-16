#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
}Node;
struct Node* head;
void insert(int data,int n);
void print();


void insert(int data,int n)
{
	int i;
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
	for(i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void print()
{
struct Node* temp=head;
printf("List is:");
while(temp!=NULL)
{
printf("%d  ",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
	head=NULL;
	insert(2,1);
	insert(3,2);
	insert(4,3);
	insert(5,4);
	insert(6,5);
	print();
	return 0;	
}
