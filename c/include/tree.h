#include<stdio.h>
#include<stdlib.h>

#ifndef TREE_H
#define TREE_H

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}tree;

tree *createTreeNode(int);
tree *createTree(tree *, tree *);
void preOrderIterative(tree *);
void inOrderIterative(tree *);
void postOrderIterative(tree *);
void preOrderRecursive(tree *);
void inOrderRecursive(tree *);
void preOrderIterativeKarumanchi(tree *);
void levelOrder(tree *);
#endif
