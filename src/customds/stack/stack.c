//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#include <stdio.h>
#include "stack.h"

void initialize(struct Stack *stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

bool isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int item) {
    if (isFull(stack)) {
        printf("stack is full, cannot add item = %d\n", item);
        return;
    }
    stack->data[++stack->top] = item;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty\n");
        return -1;
    }
    return stack->data[stack->top];
}