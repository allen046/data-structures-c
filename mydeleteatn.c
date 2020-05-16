#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
}Node;
struct Node* head;
void delete(int pos);
void insert(int data);
void print();
int main()
{
	head=NULL;
	int pos,data,n,i;
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data");
		scanf("%d",&data);
		insert(data);
		print();
	}
	printf("Enter the position you want to delete the node from memory\n");
	scanf("%d",&pos);
	delete(pos);
	printf("The list after deletion is \n");
	print();

}
void insert(int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void delete(int pos)
{
	int i;
	struct Node* temp1=head;
	if(pos==1)
	{
		head=temp1->next;
		free(temp1);
		return;
	}
	for(i=0;i<pos-2;i++)
	{
		temp1=temp1->next;
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
	}
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