#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}Node;
struct Node* head;//global variable
void insert(int x);
void print();
int main()
{
	head=NULL;
	int n,i,x;
	printf("How many numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&x);
		insert(x);
		print();
	}
}
void insert(int x)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node* temp=head;
	printf("List is :");
	while(temp!=NULL)
	{
		printf("\t %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}