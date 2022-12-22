// 2. Write a menu driven program to perform following for a BST

// o Create node.
// o Search an key in BST.
// o Insert node in a BST.
// o Delete node in a BST.
// o Display function
// o Inorder, pre-order, and post-order Traversal

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

// Create node.
struct node *newnode(int value)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = value;
    new->left = NULL;
    new->right = NULL;
    return new;
}

// Search an key in BST.
struct node* search(int value, struct node *root)
{
    if(root == NULL)
    {
        printf("Value not found.");
        return NULL;
    }
    else if(value < root->data)
    {
        search(value, root->left);
    }
    else if(value > root->data)
    {
        search(value, root->right);
    }
    else if(value == root->data)
    {
        printf("Element found.");
        return root;
    }
}

// Insert node in a BST.
struct node* insert_node(int value, struct node *root)
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
            insert_node(value, root->left);
        }
    }
    else if(value > root->data)
    {
        if(root->right == NULL)
        {
            root->right = newnode(value);
        }
        else{
            insert_node(value, root->right);
        }
    }
}

// Delete node in a BST.
/*void delete_node(int value, struct node *root)
{
    struct node *x = search(value, root);
    if(x == NULL)
    {
        printf("Element not found.");
        return NULL;
    }
     if(isLeaf)
         if (root->left == NULL) {
             struct node* temp = root->right;
             free(root);
             return temp;
         }
         else if (root->right == NULL) {
             struct node* temp = root->left;
             free(root);
             return temp;
         }
 }*/


// struct node* deleteNode(struct node* root, int key)
// {
//     // base case
//     if (root == NULL)
//         return root;
  
//     // If the key to be deleted 
//     // is smaller than the root's
//     // key, then it lies in left subtree
//     if (key < root->data)
//         root->left = deleteNode(root->left, key);
  
//     // If the key to be deleted 
//     // is greater than the root's
//     // key, then it lies in right subtree
//     else if (key > root->data)
//         root->right = deleteNode(root->right, key);
  
//     // if key is same as root's key, 
//     // then This is the node
//     // to be deleted
//     else {
//         // node with only one child or no child
//         if (root->left == NULL) {
//             struct node* temp = root->right;
//             free(root);
//             return temp;
//         }
//         else if (root->right == NULL) {
//             struct node* temp = root->left;
//             free(root);
//             return temp;
//         }
  
//         // node with two children: 
//         // Get the inorder successor
//         // (smallest in the right subtree)
//         struct node* temp = inorderSuccessor(root, x);
  
//         // Copy the inorder 
//         // successor's content to this node
//         root->data = temp->data;
  
//         // Delete the inorder successor
//         root->right = deleteNode(root->right, temp->data);
//     }
//     return root;
// }

// struct node *inorderSuccessor(struct node *root, struct node *p)
// {
//     struct node *successor = NULL;

//     while(root!=NULL)
//     {
//         if(p->data >= root->data)
//         {
//             root=root->right;
//         }
//         else
//         {
//             successor = root;
//             root = root->left;
//         }
//     }
//     return successor;
// }

//returns if its a leaf or not
// int isLeaf(struct node *root)
// {
//     if(root->left == NULL && root->right == NULL)
//     return 1;
//     else
//     return 0;
// }

// //returns the parent of the given node
// struct node *getParent(int value, struct node *root)
// {
//     if(root->left->data == value || root->right->data == value)
//     {
//         return root;
//     }
//     else if(root->left == NULL && root->right == NULL)
//     {
//         return NULL;
//     }
//     else if(value < root->data)
//     {
//         getParent(value, root->left);
//     }
//     else if(value > root->data)
//     {
//         getParent(value, root->right);
//     }
//     else if(root == NULL)
//     {
//         printf("Node not found!");
//         return NULL;
//     }
// }

// inorder traversal
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

// preorder traversal
void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// postorder traversal
void postorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    int ch=1, value, s;
    struct node *root = NULL;
    printf("Enter the root value : ");
    scanf("%d", &value);
    root = insert_node(value, root);
    while(ch == 1)
    {
        printf("Enter the element : ");
        scanf("%d",&value);
        insert_node(value, root);
        printf("Enter your choice : ");
        scanf("%d", &ch);
    }
    printf("Inorder traversal : \n");
    inorder(root);
    printf("\nPreorder traversal : \n");
    preorder(root);
    printf("\nPostorder traversal : \n");
    postorder(root);
    printf("\nEnter the element you want to search : ");
    scanf("%d",&s);
    printf("\n%d is the element found.",search(s, root)->data);
    // struct node *p = search(11, root);
    // if(isLeaf(p))
    // {
    //     printf("Found");
    // }
    // printf("parent is = %d",(getParent(11, root))->data);
    // printf("\nEnter the element you want to delete : ");
    // scanf("%d",&s);
    // printf("The deleted node : %d",deleteNode(root, s)->data);
}