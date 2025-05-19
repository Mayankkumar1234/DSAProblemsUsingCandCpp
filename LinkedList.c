
#include <stdio.h>
#include <stdlib.h>

// Program to Create a linked list i

struct Node
{
  int data;
  struct Node *next;
};

void traverseLinkedList(struct Node *head)
{
  struct Node *ptr = head;
  while (ptr != NULL)
  {
    printf("Element : %d\n", ptr->data);
    ptr = ptr->next;
  }
}
int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 21;
  head->next = second;
  second->data = 22;
  second->next = third;
  third->data = 23;
  third->next = NULL;
  traverseLinkedList(head);
  return 0;
}