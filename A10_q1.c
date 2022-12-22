// 1. Write a C program to create a Binary search tree for the given sequence of elements using
// linked list representation and display.
// Input: 22,20,11,33,13,44,14,55,15

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *newnode(int value)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = value;
    new->left = NULL;
    new->right = NULL;
    return new;
}

struct node* insert(int value, struct node *root)
{
    if(root == NULL)
    {
        root = newnode(value);
        return root;
    }
    else if(value < root->data)
    {
        if(root->left == NULL)
        {
            root->left = newnode(value);
        }
        else{
            insert(value, root->left);
        }
    }
    else if(value > root->data)
    {
        if(root->right == NULL)
        {
            root->right = newnode(value);
        }
        else{
            insert(value, root->right);
        }
    }

}

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

int main()
{
    int ch=1, value;
    struct node *root = NULL;
    root = insert(22, root);
    insert(20, root);
    insert(11, root);
    insert(33, root);
    insert(13, root);
    insert(44, root);
    insert(14, root);
    insert(55, root);
    insert(15, root);
    // printf("Enter the root value : ");
    // scanf("%d", &value);
    // root = insert(value, root);
    // while(ch == 1)
    // {
    //     printf("Enter the element : ");
    //     scanf("%d",&value);
    //     insert(value, root);
    //     printf("Enter your choice : ");
    //     scanf("%d", &ch);
    // }
    printf("Inorder traversal : \n");
    inorder(root);
}