//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#ifndef DSA_LINKED_LIST_H
#define DSA_LINKED_LIST_H

struct Node {
    int val;
    struct Node* next;
};

struct Node* createNode(int val);

struct Node* insertAtBeginning(struct Node* head, int val);

void insertAtEnd(struct Node* head, int val);

void insertAt(struct Node* head, int idx, int val);

struct Node* deleteNode(struct Node* head, int val);

void printList(struct Node* head);

void freeList(struct Node* head);

#endif //DSA_LINKED_LIST_H
