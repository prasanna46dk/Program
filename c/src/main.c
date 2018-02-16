#include"tree.h"

int main()
{
    tree *myTree=NULL;
    myTree=createTree(myTree,createTreeNode(5));
    myTree=createTree(myTree,createTreeNode(4));
    myTree=createTree(myTree,createTreeNode(3));
    myTree=createTree(myTree,createTreeNode(7));
    myTree=createTree(myTree,createTreeNode(6));
    myTree=createTree(myTree,createTreeNode(5));
    printf("Pre Order Itertive Mine: \n");
    preOrderIterative(myTree);
    printf("\n");
    printf("Pre Order recursive: \n");
    preOrderRecursive(myTree);
    printf("\n");
    printf("Pre Order Iterative Karumanchi: \n");
    preOrderIterativeKarumanchi(myTree);
    printf("\n");
    printf("In order Recursive: \n");
    inOrderRecursive(myTree);
    printf("\n");
    printf("In Order Iterative: \n");
    inOrderIterative(myTree);
    printf("\n");
    levelOrder(myTree);
    printf("\n");
    postOrderIterative(myTree);
    printf("\n");
    return 0;
}
