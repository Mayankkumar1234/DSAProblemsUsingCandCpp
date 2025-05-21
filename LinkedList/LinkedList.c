
#include <stdio.h>
#include <stdlib.h>

// Program to Create a linked list..

struct Node
{
  int data;
  struct Node *next;
};

// Insert a new node at the beggining of the linked list

struct Node *insertAtBeggining(struct Node *head, int data)
{
  struct Node *ptr;
  ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
}
// Insert A new node at the particular index...
struct Node* insertInBetween(struct Node* head , int index, int data){
          struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
          struct Node *prev = head;
         struct Node*temp = head;
      for(int i=0;i<index;i++){
           prev = temp;
            temp = temp->next;   
                           }      
         prev->next = ptr;
          ptr->data = data;
          ptr->next = temp;                 
       return head;
            }
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

  // Allocate the memory for linkedList in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  // Assign data and link first and second node
  head->data = 21;

  // Link first element to the second
  head->next = second;
  second->data = 22;
  second->next = third;
  third->data = 23;
  third->next = NULL;
  traverseLinkedList(head);
  head = insertAtBeggining(head, 20);
  printf("After inserting at the beginning\n");
  traverseLinkedList(head);
  head = insertInBetween(head, 2, 25);
  printf("After inserting in between\n");
  traverseLinkedList(head);
  return 0;
}