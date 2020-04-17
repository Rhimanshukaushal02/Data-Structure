#include<stdio.h>
#include<stdlib.h>
void create(struct node*)
void InOrder(struct node *);
void PostOrder(struct node*);
void PreOrder(struct node*);
int count(struct node*);
int LeafNode(struct node*);
int NonLeafNode(struct node*)
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
int main()
{
    root=create();
    printf("Preorder is:\n");
    PreOrder(root);
    printf("Inorder is:\n");
    InOrder(root);
    printf("Postorder is:\n");
    int c;
    c=count(root);
    printf("number of node is %d",c);
    int d;
    d=LeafNode(root);
    printf("number of leaf node is %d",d);
    int e;
    e=NonLeafNode(root);
    printf("number of non leaf node %d",e);
}
void(struct node *create)
{
    struct node *newnode;
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data(-1 for no data)");
    scanf("%d",&x);
    if(x==-1)
    {

        return 0;
    }
    else
    {
        newnode->data=x;
        printf("enter the left node data of %d",x);
        newnode->left=create();
        printf("enter the right node data of %d",x);
        newnode->right=create();
        return newnode;
    }
}
void InOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        InOrder(root->left);
        printf("%d",root->data);
        InOrder(root->right);
    }
}
void PostOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d",root->data);
    }
}
void PreOrder(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        printf("%d",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }

}
int count(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return (1+count(root->left)+count(root->right));
    }

}
int LeafNode(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        if(root->left==NULL&& root->right==NULL)
        {
            return 1;
        }
        else
        {
            return LeafNode(root->left)+LeafNode(root->right);
        }

    }

}
int NonLeafNode(struct node*root)
{
    if(root==NULL||(root->left==NULL&&root->right==NULL))
        return 0;
    else
    {
        return 1+NonLeafNode(root->left)+NonLeafNode(root->right);
    }

}


