#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
	
}Node;

void print(struct Node* p);
void reverse(struct Node* p);
struct Node* Insert(struct Node* head, int data);
int main()
{
	struct Node* head=NULL;
	head=Insert(head,2);
	head=Insert(head,3);
	head=Insert(head,4);
	head=Insert(head,5);
	printf("The list is\n");
	print(head);
	printf("The reverse order is\n");
	reverse(head);
}
void print(struct Node* p)
{
	if(p==NULL)
	{
	printf("\n");
	return;// Exit condition
	}
	printf("%d",p->data);//
	print(p->next);


}
void reverse(struct Node* p)
{
	if(p==NULL)
	{
		printf("\n");
		return;
	}
	print(p->next);
	printf("%d",p->data);
}

struct Node* Insert(struct Node* head, int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
		else
		{
			struct Node* temp1=head;
			while(temp1->next!=NULL)temp1=temp1->next;
			temp1->next=temp;
		}
		return head;
}
