//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#include <stdio.h>
#include "stack.h"

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element = %d\n", peek(&stack));

    pop(&stack);
    printf("Top element = %d\n", peek(&stack));

    return 0;
}