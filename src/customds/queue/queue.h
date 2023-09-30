//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#ifndef DSA_QUEUE_H
#define DSA_QUEUE_H

#include <stdbool.h>

#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    unsigned int front, rear, count;
};

void initialize(struct Queue *queue);

bool isEmpty(struct Queue *queue);

bool isFull(struct Queue *queue);

void enqueue(struct Queue *queue, int item);

int dequeue(struct Queue *queue);

int peek(struct Queue *queue);

void display(struct Queue *queue);

#endif //DSA_QUEUE_H
