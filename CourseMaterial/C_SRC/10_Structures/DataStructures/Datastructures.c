#include <stdbool.h>
#include <stdlib.h>
#include "Datastructures.h"

struct NodeLL* create_NodeLL(int data){
      struct NodeLL* NewNode = malloc(sizeof(struct NodeLL));
      NewNode->data = data;
      NewNode->next = NULL;
      return NewNode;
}

bool isEmptyLL(struct NodeLL* head){
      return (head==NULL);
}
