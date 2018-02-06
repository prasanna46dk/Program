#include <stdio.h>
#include <stdlib.h>

typedef int bool;

typedef struct Queue
{
  int rear, front, size;
  unsigned capacity;
  int *array;
}Q;

Q *CreateQueue(unsigned capacity)
{
  Q *queue=(Q*)malloc(sizeof(Q));
  queue->capacity=capacity;
  queue->front=queue->size=0;
  queue->rear=capacity-1;
  queue->array=(int*)malloc((sizeof(int))*queue->capacity);
  return queue;
}

bool isFull(Q *queue)
{return (queue->size==queue->capacity);}

bool isEmpty(Q *queue)
{return (queue->size==0);}

int Enqueue(Q **queue, int NewNo)
{
  if (isFull(*queue))
  {  
    printf("Queue is Full \n");     
    return -1;
  }
  (*queue)->rear=((*queue)->rear+1)%((*queue)->capacity);
  (*queue)->array[(*queue)->rear]=NewNo;
  ((*queue)->size)+=1;
  printf("%d enqueued to queue\n", NewNo);
  return 0;
}

int Dequeue(Q **queue)
{
  if (isEmpty(*queue))
  {
    printf("Queue is Empty \n");
    return -1;
  }
  int item=(*queue)->array[(*queue)->front];
  (*queue)->front=((*queue)->front+1)%(*queue)->capacity;	
  (*queue)->size-=1;
  return item;
}

int main()
{
  int capacity=5;
  Q *queue=CreateQueue((unsigned)capacity);
  
  printf("\nCapacity %d\n",queue->capacity);
  printf("Size%d\n",queue->size);
  printf("Front%d\n",queue->front);
  printf("Rear%d\n",queue->rear);
  

  printf("The Item is %d \n",Dequeue(&queue));
  while (capacity!=-1)
  {
    printf("Enqueue %d \n",Enqueue(&queue,capacity));
    
    printf("Capacity %d\n",queue->capacity);
    printf("Size%d\n",queue->size);
    printf("Front%d\n",queue->front);
    printf("Rear%d\n",queue->rear);
    
    printf("Queue Size %d\n",queue->size);
    printf("Queue Front : %d\n",queue->front);
    printf("Queue Rear: %d\n",queue->rear);
    capacity--;
    printf("\n");
  }
  return 0;
}
