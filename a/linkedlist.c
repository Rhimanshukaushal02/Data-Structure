#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
	struct node *link;

};
struct node *root=NULL;
int len;
void out(void);
void create(void);
void append(void);
void addatbegin(void);
void movetofront(void);
int length(void);
void display(void);
void delete(void);
void main()
{
	int ch;
	int i=1;
	while(i)
	{      printf("single linked list operations:\n");
	       printf("1.create\n");
	       printf("2.Append\n");
	       printf("3.Add at begin\n");
	       printf("4.Move to front\n");
	       printf("5.Length\n");
               printf("6.display\n");
	       printf("7.delete\n");
	       printf("8.reverse\n");
	       printf("9.quit\n");
	       printf("Enter your choice\n");
	       scanf("%d",&ch);
	       switch(ch)
	       {
		       case 1: create();
			       break;
		       case 2: append();
			       break;
		       case 3: addatbegin();
			       break;
		       case 4: movetofront();
			       break;
		       case 5: len=length();
			       printf("%d",len);
			       break;
		       case 6: display();
			       break;
		       case 7: delete();
			       break;
		       case 8:i--;
		       default : printf("Invalid choice\n");
	       }}}
void create()
{
	int n,data,i;
	struct  node *temp;
	printf("enter the number of node");
	scanf("%d",&n);
	root=(struct node*)malloc(sizeof(struct node));
	printf("enter the data of 1st node\n");
	scanf("%d",&data);
        temp=root;
	root->data=data;
	temp->link=NULL;
	struct node *Newnode;
	for(i=1;i<n;i++)
	{	Newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data of node");
	scanf("%d",&data);
	Newnode->data=data;
	temp->link=Newnode;
	Newnode->link=NULL;
	temp=temp->link;
}
struct node *p;
for(int i=0;i<n;i++)
{printf("%d",p->data);}
}

void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
		scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		while(p->link!=0)
		{
			p=p->link;
		}
		p->link=temp;}}
int length()
{
	int count=0;
	struct node *temp;
	temp=root;
	while(temp!=0)
	{	count++;

	}
	return count;
}
void display()
{
	struct node *temp;
	temp=root;
	printf("you entered data");
	if(root==NULL)
		printf("List is empty\n");
	else
	{
		while(temp)
		{
			printf("%d-->",temp->data);
			temp=temp->link;
		}}
	printf("\n\n");}

void delete()
{
struct node *temp;
temp=root;
int loc;
printf("which node is to be delete\n");
scanf("%d",&loc);
if(loc==1)
{	root=temp->link;
temp->link=NULL;
free(temp);
}
else
{
struct node *p,*q;
int i=1;
while(i<loc-1)
	p=p->link;
i++;
}
struct node *p,*q;
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
void addatbegin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data part\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
	temp->link=root;
	root=temp;
}
}
void movetofront()
{


 struct node *p,*q;
 p=root;
  while(p->link != NULL)
{
   
    q=p;
    p=p->link;
}
 q->link= NULL;
 p->link=root;
 root=p;
}

void out()
{int i=0;}




