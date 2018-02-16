#include<stdlib.h>

#ifndef STACK_H
#define STACK_H

typedef struct stack{
    void *data;
    struct stack* up;  
}stack;

stack *createStackNode(void *);
void push(stack **, void *);
void *pop(stack **);
void *top(stack **);
//void printStack(stack *);

#endif
