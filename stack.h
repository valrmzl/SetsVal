//
// Created by luax2 on 11/11/2021.
//

#ifndef SETS_STACK_H
#define SETS_STACK_H
typedef void *TYPE;
typedef struct STRNODE NODE;
typedef struct STRSTACK STACK;


STACK *newStack();
void push(STACK* stack, void *value);
void otherPush(STACK *stack, void *value);
void *pop(STACK* stack);
void *peek(STACK* stack);
void invertirStack(STACK *s);
int compare(void *a,void*b);
void sortStack(STACK *s, int(*compare)(void *a, void *b));

void printStackOfIntegers(STACK*stack);
#endif //SETS_STACK_H
