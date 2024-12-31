#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

/* check stack empty */ 
int isEmpty(void) {
    return top == -1;
}

/* check stack full */ 
int isFull(void) {
    return top == MAX - 1;
}

/* push element */ 
void push(int value) {
    if (isFull()) {
        printf("Stack is full! Cannot push.\n");
    } else {
        stack[++top] = value;
        printf("Pushed %d into the stack.\n", value);
    }
}

/* pop element */ 
void pop(void) {
    if (isEmpty()) {
        printf("Stack is empty! Cannot pop.\n");
    } else {
        printf("Popped %d from the stack.\n", stack[top--]);
    }
}

/* print length of stack */
void length(void) {
    printf("Current stack long: %d\n", top + 1);
}

