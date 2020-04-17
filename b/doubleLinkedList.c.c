#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};struct node *root=NULL;
#define N 5
void create(void);
//void insertAtEnd(void);
void insertAtStart(void);
void insertAtMiddle(void);
void deleteAtStart(void);
void delete(void);
void display(void);
int len()
int main()
{
    int ch;
    while(1)
    {
        printf("1.create");

        printf("3.Insert At Start");
        printf("4.Inserrt At Middle");
        printf("5.Delete At Start");
        printf("6.delete");
        printf("7.Display");
        printf("8.exit");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:create();
            break;
            //case 2:insertAtEnd();
            //break;
            case 3:insertAtStart();
            break;
            case 4:insertAtMiddle();
            break;
            case 5:deleteAtStart();
            break;
            case 6:delete();
            break;
            case 7:display();
            break;
            case 8:exit(1);
            break;

           default:printf("invalid selection");
            break;
        }
    }
}
void create()
{
    int i;
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter 1st data");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    root=newnode;
    temp=root;
    for(i=2;i<=N;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter %d data",i);
        scanf("%d",&newnode->data);
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->left=temp;
        temp->right=newnode;
        temp=newnode;
    }

}
void insertAtStart()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&temp->data);
    temp->right=NULL;
    temp->left=NULL;
    temp->right=root;
    root->left=temp;
    root=temp;
}
void insertAtMiddle()
{
    struct node *temp,*newnode,*next;
    temp=root;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->right=NULL;
    newnode->left=NULL;
    int pos;
    printf("enter the position where you want to insert");
    scanf("%d",&pos);
    int l=len();
    if(pos>l)
    {
        printf("out of range");
    }
    else
    {
        int i;
        for(i=1;i<pos;i++)
        temp=temp->right;
    }
    next=temp->right;
    newnode->left=temp;
    newnode->right=next;
    next->left=newnode;
    temp->right=newnode;
}
void deleteAtStart()
{
    struct node *temp;
    temp=root;
    root=temp->right;
    temp->right=NULL;
    free(temp);
}
void delete()
{
    struct node *temp,*next;
    temp=root;
    int loc ,i;
    printf("enter the location");
    scanf("%d",&loc);
    for(i=1;i<loc-1;i++)
    {
        temp=temp->right;
    }
    next=temp->right;
    next=temp->right;
    temp->right=next;
    next->left=temp;
    temp=temp->right;
    temp->left=NULL;
    temp->right=NULL;
}
void display()
{
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->right;
    }
}
int len()
{
    struct node *temp;
    temp=root;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->right;
    }
    return count;
}

