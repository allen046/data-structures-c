#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
}Node;
struct Node* head;
void insert();
void reverse();
void print();
int main()
{
	int i,data,n;
	printf("Enter the limit\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data into the node\n");
		scanf("%d",&data);
		insert(data);
		print();
	}
	
	reverse();
	printf("The reversed linked list is:\n");
	print();


}
void insert(int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void reverse()
{
    struct Node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; // Make last node as head

        
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