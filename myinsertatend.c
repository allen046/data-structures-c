#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	int data;
	struct Node* next;
}Node;
struct Node* head;
void insertatend(int x);
void print();
void insert(int z);
int main()
{
	head=NULL;
	int x,z,i,n;
	printf("Enter the limit\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data\n");
		scanf("%d",&z);
		insert(z);
		print();
	}
	
	
	printf("Enter the data to be inserted at the end\n");
	scanf("%d",&x);
	insertatend(x);
	printf("The new list after insertion is\n");
	print();
	

}
void insert(int z)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=z;
	temp->next=head;
	head=temp;
}

void insertatend(int x)
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	struct Node* temp;
	temp1->data=x;
	temp1->next=NULL;
	temp=head;
	
	while(temp!=NULL)
	
		temp=temp->next;
		temp->next=temp1;
		printf("Data inserted succesfully");
	
	
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