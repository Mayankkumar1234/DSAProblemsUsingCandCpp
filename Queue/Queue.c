#include <stdio.h>
#include <stdlib.h>

struct Queue
{
  int size;
  int front;
  int rear;
  int *arr;
};

int isEmpty(struct Queue *q){
   if(q->front ==-1){
    return 1;
   }
   return 0;
}
  int isFull(struct Queue *q){
    if(q->rear == q->size-1){
       return 1;
    }
    return 0;
  }

void Enqueue(struct Queue *q,int item)
{
  if (isFull(q))
  {
    printf("Queue overflow");
  }else{
    q->rear++;
    q->arr[q->rear] = item;
    printf("Enqued element :%d\n", item);
  }
}
 int dequeue(struct Queue *q){
  int a=-1;
  if(isEmpty(q)){
   printf("This queue is empty\n");
  }else{
    q->front++;
     a = q->arr[q->front];
  }
  return a;
 }
int main()
{
  struct Queue q;
  q.size = 4;
  q.front = -1;
  q.rear = -1;
  q.arr = (int *)malloc(q.size*sizeof(int));
  return 0;
}