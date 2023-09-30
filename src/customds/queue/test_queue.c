//
// Created by Syed Ibna Zubayear on 29/9/23.
//

#include <stdio.h>
#include "queue.h"

int main() {
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Top element = %d\n", peek(&queue));

    dequeue(&queue);
    printf("Top element = %d\n", peek(&queue));
    display(&queue);

    return 0;
}