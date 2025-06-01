#include <stdbool.h>
#ifndef DataStructures_COSS_H
#define DataStructures_COSS_H

/* Singly-connected node */
struct Node_LL{
  int data;
  struct Node_LL *next;
};

/*  Binary Tree Struct */
struct Node_BT{
  int data;
  struct Node_BT *left;
  struct Node_BT *right;
};
struct NodeLL* create_NodeLL(int data);
bool isEmptyLL(int data);


#endif
