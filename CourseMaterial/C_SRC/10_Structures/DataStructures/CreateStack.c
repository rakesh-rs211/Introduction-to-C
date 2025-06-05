#include "Datastructures.h"
#include "Stack.h"
#include <stdio.h>

int main(int argc, char **argv){
  int arr[5]={100, 324, 432, 36, 1};
  int i,n=5;
  struct Stack stk;
  struct NodeLL* nptr;
  /* Create a stack from the array, arr */
  stk.head = NULL; nptr = NULL;
  for(i=0; i<n;i++){
    stack_push(&stk,arr[i]);
    printf("%p \n",stk.head);
  }
  /* Print the stack */
  nptr = stk.head;
  while(nptr != NULL){
    printf("%d \n",nptr->data);
    nptr = nptr->next;
  }
  return 0;
}
