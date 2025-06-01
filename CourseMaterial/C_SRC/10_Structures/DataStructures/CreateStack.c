#include "Datastructures.h"
include "Stack.h"
#include <stdio.h>

int main(int argc, char[] *argv){
  int arr[5]={100, 324, 432, 36, 1};
  int i,n=5;
  struct NodeLL* head;
  /* Create a stack from the array, arr */
  for(i=0; i<n:i++){
    stack_push(head,arr[i]);
  }
  /* Pop and Print the stack */
  while(isEmptyLL(head)){
    printf("%d \n",stack_pop(head);
  }
  return 0;
}
