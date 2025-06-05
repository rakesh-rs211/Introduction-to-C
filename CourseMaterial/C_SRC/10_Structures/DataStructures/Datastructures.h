#include <stdbool.h>
#ifndef DataStructures_COSS_H
#define DataStructures_COSS_H

/* Singly-connected node */
struct NodeLL{
  int data;
  struct NodeLL *next;
};


/*  Binary Tree Struct */
struct NodeBT{
  int data;
  struct NodeBT *left;
  struct NodeBT *right;
};
#endif
