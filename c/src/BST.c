#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode
{
  int data;
  struct TreeNode *left, *right;
}TreeNode;

TreenNode *CreateNode(int data)
{
  TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
  root -> data = data;
  root -> left = root -> right = NULL;
  return root;
}

TreeNode * CreateTree(TreeNode * root, TreeNode *NewNode)
{
  TreeNode * temp = root;
  if (!temp)
    return NewNode;
  else if (temp -> data > NewNode)
    temp -> left = CreateTree(temp -> left, NewNode);
  else 
    temp -> right = CreateTree(temp -> right, NewNode);
  return temp; 
}

int *PreOrder(TreeNode *root, static int i, static int arr[])
{
  
}
int main()
{
  
  return 0;
}
