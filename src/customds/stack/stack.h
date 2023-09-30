//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#ifndef DSA_STACK_H
#define DSA_STACK_H

#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack);

bool isEmpty(struct Stack *stack);

bool isFull(struct Stack *stack);

void push(struct Stack *stack, int item);

int pop(struct Stack *stack);

int peek(struct Stack *stack);

#endif //DSA_STACK_H
