#ifndef _LIB_H_
#define	_LIB_H_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct Stack
{
    Node *top;
}Stack;

void initStack(Stack *s);
bool isEmpty(Stack *s);
bool isFull(Stack *s);
int peek(Stack *s);
size_t count(Stack *s);
void push(Stack *s, int data);
int pop(Stack *s);
void clear(Stack *s);

#endif
