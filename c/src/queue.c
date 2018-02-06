#include"queue.h"

queue *createQueueNode(void *data)
{
    queue *newQueueNode=(queue*)malloc(sizeof(queue));
    newQueueNode->data=data;
    newQueueNode->down=NULL;
    return newQueueNode;
}

void enqueue(queue **queueHead, void *data)
{
    if (!(*queueHead))
        *queueHead=createQueueNode(data);
    else{
        queue *tempQueueNode=*queueHead;
        while (tempQueueNode->down != NULL)
        {
            tempQueueNode=tempQueueNode->down;
        }
        tempQueueNode->down=createQueueNode(data);
    }
}

void *dequeue(queue **queueHead)
{
    if (!(*queueHead))
        return NULL;
    void *data=NULL;
    queue *tempQueueNode=*queueHead;
    if (tempQueueNode->down == NULL)
    {
        data=tempQueueNode->data;
        tempQueueNode->data=NULL;
        free(tempQueueNode);
        *queueHead=NULL;
        return data;
    } else {
        while ((tempQueueNode->down != NULL) && (tempQueueNode->down->down != NULL))
            tempQueueNode=tempQueueNode->down;
        data=tempQueueNode->down->data;
        free(tempQueueNode->down);
        tempQueueNode->down=NULL;
        return data;
    }
}
