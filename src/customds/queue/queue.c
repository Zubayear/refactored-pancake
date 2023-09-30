//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#include <stdio.h>
#include "queue.h"

void initialize(struct Queue *queue) {
    queue->front = queue->rear = queue->count = 0;
}

bool isEmpty(struct Queue *queue) {
    return queue->count == 0;
}

bool isFull(struct Queue *queue) {
    return queue->count == MAX_SIZE;
}

void enqueue(struct Queue *queue, int item) {
    if (isFull(queue)) {
        printf("queue full. cannot add item = %d\n", item);
        return;
    }
    // add to rear, since it's circular queue we mod with MAX_SIZE
    queue->data[queue->rear % MAX_SIZE] =  item;
    queue->rear++;
    queue->count++;
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("queue empty\n");
        return -1;
    }
    // we dequeue from front
    int idx = queue->front % MAX_SIZE;
    int ans = queue->data[idx];
    queue->data[idx] = -1; // assign -1
    queue->front++;
    queue->count--;
    return ans;
}

int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("queue empty\n");
        return -1;
    }
    return queue->data[queue->front % MAX_SIZE];
}

void display(struct Queue *queue) {
    for (int i = queue->front; i < queue->rear; ++i)
        printf("Top element = %d\n", queue->data[i % MAX_SIZE]);
}