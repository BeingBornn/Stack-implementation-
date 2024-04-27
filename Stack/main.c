#include "lib.h"

int main()
{
    Stack s;
    //initStack()
    initStack(&s);
    printf("Stack initialized.\n");
    //isEmpty()
    printf("Stack is empty: %s\n", isEmpty(&s) ? "Yes" : "No");
    //push()
    push(&s, 2);
    push(&s, 1);
    push(&s, 0);
    //peek()
    int top = peek(&s);
    printf("%d\n",top);
    // pop()
    pop(&s);
    int new = peek(&s);
    printf("%d\n",new);
    // count()
    size_t size = count(&s);
    printf("%lu\n", size);
    //isFull()
    printf("Stack is Full: %s\n", isFull(&s) ? "Yes" : "No");
    printf("Stack is empty: %s\n", isEmpty(&s) ? "Yes" : "No");
    //clear()
    clear(&s);
    printf("Stack is Full: %s\n", isFull(&s) ? "Yes" : "No");
} 