#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void initialize(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(struct Queue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue Overflow: Cannot enqueue element %d\n", value);
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->arr[++queue->rear] = value;
    printf("Enqueued %d into the queue\n", value);
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow: Cannot dequeue from an empty queue\n");
        return -1; 
    }

    int dequeuedValue = queue->arr[queue->front++];
    printf("Dequeued %d from the queue\n", dequeuedValue);

    if (queue->front > queue->rear) {
        initialize(queue);
    }

    return dequeuedValue;
}

int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot peek\n");
        return -1;
    }

    return queue->arr[queue->front];
}

int main() {
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Front element: %d\n", peek(&queue));

    dequeue(&queue);
    dequeue(&queue);
    dequeue(&queue);
    dequeue(&queue); 

    return 0;
}



// Output:
// Enqueued 20 into the queue
// Enqueued 30 into the queue
// Front element: 10
// Dequeued 10 from the queue
// Dequeued 20 from the queue
// Dequeued 30 from the queue
// Queue Underflow: Cannot dequeue from an empty queue
