#include <stdio.h>
#include "Datastructures.h"

void stack_push(struct NodeLL *head, int data){
  struct NodeLL *new_node;
  new_node = Create_NodeLL(data);
  new_node->next = head;
  head = new_node;
  return;
}

 int stack_pop(struct NodeLL *head){
  int data;
  if(isEmptyLL(head)){
    printf("Stack is empty\n");
    data = -1e+10; /* Set to arbitarily low value */
  }
  else{
    data = head->data;
    head = head->next;
  }
  return data;
}  
