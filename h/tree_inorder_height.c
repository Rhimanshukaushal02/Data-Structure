#include<stdio.h>
#include<stdlib.h>
void create(struct node*)
void InOrder(struct node *);
void height(struct node*);
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
    printf("Inorder is:\n");
    InOrder(root);
    printf("height of tree is %d",height(root));
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
  int height(struct node*root){
    if (node == NULL)
        return 0;
    else
    {

        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
