#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
}Node;
struct Node* head;
void insert(int data);
void delete(int n);
void print();
void insert(int data)
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=head;
	head=temp1;
}
void delete(int n)
{
	struct Node* temp1=head;
	int i;
	if(n==1)
	{
		head=temp1->next;
		free(temp1);
		return;
	}
	
	for(i=0;i<n-2;i++)
	{
		temp1=temp1->next;
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
	}
}
void  print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
	int n;
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	print();
	
	printf("Enter a position\n");
	scanf("%d",&n);
	delete(n);
	print();
}

