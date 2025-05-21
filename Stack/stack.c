#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int *arr;
  int top;
};
int isEmpty(struct stack *ptr)
{
  if (ptr->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  // struct stack s;
  // s.size = 80;
  // s.top = -1;
  // s.arr = (int *)malloc(s.size * sizeof(int));
  
  struct stack *s;
  s->size = 80;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));
   if(isEmpty(s)){
    printf("Stack is empty\n");
   }else{
    printf("Stack is not empty\n");
   } 
  return 0;
}