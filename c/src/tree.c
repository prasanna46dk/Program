#include"tree.h"
#include"stack.h"
#include"queue.h"
#define True 1
#define False 0

tree *createTreeNode(int data)
{
    tree *newTreeNode = (tree*)malloc(sizeof(tree));
    newTreeNode->data = data;
    newTreeNode->left = newTreeNode->right = NULL;
    return newTreeNode;
}

tree *createTree(tree *treeRoot, tree *newTreeNode)
{
    if(!treeRoot)
        return newTreeNode;
    if (treeRoot->data <= newTreeNode->data)
        treeRoot->right = createTree(treeRoot->right, newTreeNode);
    else 
        treeRoot->left= createTree(treeRoot->left, newTreeNode);
    return treeRoot;
}

void inOrderRecursive(tree *treeRoot)
{   
     if (!treeRoot)
         return;
     inOrderRecursive(treeRoot->left);
     printf("%d-> ",treeRoot->data);
     inOrderRecursive(treeRoot->right);
}

void inOrderIterative(tree *treeRoot)
{
    stack *s=NULL;
    tree *tempTreeRoot=treeRoot;
    while (True)
    {
        while (tempTreeRoot)
        {
            push(&s, (void *)tempTreeRoot);
            tempTreeRoot=tempTreeRoot->left;
        }
        if (!s)
            break;
        tempTreeRoot=(tree *)pop(&s);
        printf("%d-> ",tempTreeRoot->data);
        tempTreeRoot=tempTreeRoot->right;
    }
}

void preOrderRecursive(tree *treeRoot)
{
    if (!treeRoot)
        return;
    printf("%d-> ",treeRoot->data);
    preOrderRecursive(treeRoot->left);
    preOrderRecursive(treeRoot->right);
}

void preOrderIterativeKarumanchi(tree *treeRoot)
{
    stack *s=NULL;
    tree *tempTreeRoot=treeRoot;
    while (True)
    {
        while (tempTreeRoot)
        {
            printf("%d->",tempTreeRoot->data);
            push(&s, (void *)tempTreeRoot);
            tempTreeRoot=tempTreeRoot->left;
        }
        if (!s)
            break;
        tempTreeRoot=(void *)pop(&s);
        tempTreeRoot=tempTreeRoot->right;
    }
}

void postOrderIterative(tree *treeRoot)
{
    stack *s=NULL;
    tree *tempTreeRoot=treeRoot;
    do 
    {
        while(tempTreeRoot)
        {
            if (tempTreeRoot->right)
                push(&s, tempTreeRoot->right);
            push(&s, tempTreeRoot);
            tempTreeRoot=tempTreeRoot->left;
        }
        tempTreeRoot=(tree*)pop(&s);
        if (tempTreeRoot->right && (tree *)top(&s)==tempTreeRoot->right) {
            free(pop(&s));
            push(&s, (void *)tempTreeRoot);
            tempTreeRoot=tempTreeRoot->right;
        } else {
            printf("%d ->",tempTreeRoot->data);
            tempTreeRoot=NULL;
        }
    } while(s);
}

void levelOrder(tree *treeRoot)
{
    if (!treeRoot)
        return;
    queue *q=NULL;
    enqueue(&q, (void *)treeRoot);
    while (q)
    {
        treeRoot=(tree *)dequeue(&q);
        printf("%d-> ",treeRoot->data);
        if (treeRoot->left)
            enqueue(&q, (void *)treeRoot->left);
        if (treeRoot->right)
            enqueue(&q, (void *)treeRoot->right);
    }
}

void preOrderIterative(tree *treeRoot)
{
    stack *s=NULL;
    push(&s,(void*)treeRoot);
    tree *tempTreeRoot;
    while (s){
        tempTreeRoot=(tree *)pop(&s);
        printf("%d-> ",tempTreeRoot->data);
        if (tempTreeRoot->right)
            push(&s,(void *)tempTreeRoot->right);
        if (tempTreeRoot->left)
            push(&s,(void *)tempTreeRoot->left);
    }
}
