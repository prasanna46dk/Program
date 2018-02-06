#include<stdlib.h>

#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue{
    void *data;
    struct queue *down;
}queue;

queue *createQueueNode(void *);
void enqueue(queue **, void *);
void *dequeue(queue **);

#endif
