#include<stdio.h>
#include<stdlib.h>
void InOrder(struct node *);
void PostOrder(struct node*);
void PreOrder(struct node*);
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
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
        return;
    }
    else
    {
        printf("%d",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }

}
