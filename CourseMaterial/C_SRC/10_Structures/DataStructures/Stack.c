#include <stdio.h>
#include <stdlib.h>
#include "Datastructures.h"
#include "Stack.h"

void stack_push(struct Stack* sptr, int data){
  struct NodeLL *new_node;
  new_node = malloc(sizeof(struct NodeLL));
  new_node->data = data;
  new_node->next = sptr->head;
  sptr->head = new_node;
  //printf("Head in stack_push: %p\n",sptr->head);
  return;
}
