#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element %d\n", value);
        return;
    }

    stack[++top] = value;
    printf("Pushed %d onto the stack\n", value);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow: Cannot pop from an empty stack\n");
        return -1; 
    }

    int poppedValue = stack[top--];
    printf("Popped %d from the stack\n", poppedValue);
    return poppedValue;
}

int peek() {
    if (top == -1) {
        printf("Stack is empty, cannot peek\n");
        return -1;
    }

    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());

    pop();
    pop();
    pop();
    pop(); 

    return 0;
}



// Output:
// Pushed 10 onto the stack
// Pushed 20 onto the stack
// Pushed 30 onto the stack
// Top element: 30
// Popped 30 from the stack
// Popped 20 from the stack
// Popped 10 from the stack
// Stack Underflow: Cannot pop from an empty stack
