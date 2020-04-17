#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head;
int main()
{
	int n;
	printf("enter number of node");
	scanf("%d",&n);
        struct node *temp;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("memory not allocated");
	
	}
	int data;
	printf("enter frist node data\n");
	scanf("%d",&data);
	temp=head;
	head->data=data;
	head->link=NULL;
	for(int i=1;i<n;i++)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Memory not alocated");
			break;
		}
		printf("enter node data");
		scanf("%d",&data);
		newnode->link=NULL;
		temp->link=newnode;
		temp=temp->link;
	}
	printf("list created successfully!\n");
}

