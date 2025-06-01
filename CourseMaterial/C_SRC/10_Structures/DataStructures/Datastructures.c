#include <stdbool.h>
#include "datastructure.h"

struct NodeLL* create_NodeLL(int data){
      struct NodeLL* NewNode = (struct NodeLL*)malloc(sizeof(struct NodeLL*));
      NewNode->data = data;
      NewNode->next = nullptr;
      return NewNode;
}

bool isEmptyLL(struct NodeLL* head){
      return (head==nullptr);
}      
