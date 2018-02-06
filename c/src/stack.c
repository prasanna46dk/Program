#include"stack.h"

stack *createStackNode(void *data)
{   
    stack *s=(stack *)malloc(sizeof(stack));
    s->data=data;
    s->up=NULL;
    return s;
}

void push(stack **s, void *data)
{
    if (!data)
        return;
    stack *tempStack=createStackNode(data);
    if (!(*s))
    {
        *s=tempStack;
    } else {
        tempStack->up=(*s);
        *s=tempStack;    
    }
}

void *pop(stack **s)
{
    void *data=NULL;
    stack *tempStackNode=(*s);
    if (!(tempStackNode))
        return data;
    data=tempStackNode->data;
    (*s)=tempStackNode->up;
    tempStackNode->up=tempStackNode->data=NULL;
    free(tempStackNode);
    return data;
}
