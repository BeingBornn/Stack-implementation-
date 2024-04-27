#include "lib.h"
//s->top = top element



void initStack(Stack *s)
{
    s->top = NULL;
}

bool isEmpty(Stack *s)
{
    return (s->top == NULL);
}

bool isFull(Stack *s)
{
    return (!(s->top == NULL));
}

int peek(Stack *s)
{
    if(isEmpty(s))
    {
        printf("the stack is empty");
        return(-1);
    }
    Node *temp = s->top;
    int data = temp->data;
    return (data);
}

size_t count(Stack *s)
{
    Node *current = s->top;
    size_t size = 0;
    while(current != NULL)
    {
        size++;
        current = current->next;
    }
    return (size); 
}

void push(Stack *s, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node)); //returns a pointer to the beginning of the allocated memory
    if(!newNode)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data; //set the data part of the node;
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack *s)
{
    //check if the stack is empty
    if(isEmpty(s))
    {
        printf("the stack is empty!");
        return(-1);// -1 to indicate an error
    }
    Node *temp = s->top; // save the current top node
    s->top = temp->next; // move the top pointer to next node in stack
    int data = temp->data; // retrieve the data from the top node
    free(temp); // free memory
    return (data);
    //s->top = temp->next->s->top;
}

void clear(Stack *s)
{
    Node *current = s->top;
    size_t size = 0;

    while (current != NULL)
    {
        Node *temp = current->next;
        free(current);
        current = temp;
    }
    s->top = NULL;
}

