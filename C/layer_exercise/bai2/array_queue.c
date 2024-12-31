#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1; /* pos of first */
int rear = -1; /* pos of last */

/* check queue empty */ 
int isEmpty(void) {
    return front == -1;
}

/* check queue full */ 
int isFull(void) {
    return rear == MAX - 1;
}

/* push element */ 
void push(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot push.\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("Pushed %d into the queue.\n", value);
    }
}

/* pop element */ 
void pop(void) {
    if (isEmpty()) 
    {
        printf("queue is empty! Cannot pop.\n");
    } 
    else 
    {
        printf("Popped %d from the queue.\n", queue[front]);
        if (front == rear) { // Reset if quêu empty
            front = rear = -1;
        } else {
            front++;
        }
    }
}

/* print length of queue */
void length(void) {
    if (isEmpty()) {
        printf("Queue long: 0\n");
    } else {
        printf("Current queue long: %d\n", rear - front + 1);
    }
}

