#ifndef STACK_COSS_H
#define STACK_COSS_H
STACK_COSS_H
#include "Datastructures.h"
struct Stack {
        struct NodeLL* head;
};
void stack_push(struct Stack* sptr, int data);

#endif
