//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node *createNode(int val) {
    struct Node* newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAtBeginning(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

void insertAtEnd(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    struct Node* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;

}

// idx starting at 1
void insertAt(struct Node* head, int idx, int val) {
    if (idx == 1) {
        insertAtBeginning(head, val);
        return;
    }

    struct Node* newNode = createNode(val);
    struct Node* cur = head;
    int k = 1;
    while (cur != NULL) {
        if (k == idx-1) {
            newNode->next = cur->next;
            cur->next = newNode;
            break;
        }
        cur = cur->next;
        k++;
    }
}

struct Node *deleteNode(struct Node *head, int val) {
    struct Node* cur = head;
    struct Node* prev = NULL;

    while (cur != NULL && cur->val != val) {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL) {
        printf("Data not found in the list.\n");
        return head;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = cur->next;
    }
    free(cur);
    return head;
}

void printList(struct Node* head) {
    struct Node* cur = head;
    while (cur != NULL) {
        printf("%d -> ", cur->val);
        cur = cur->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* cur = head;
    while (cur != NULL) {
        struct Node* tmp = cur;
        cur = cur->next;
        free(tmp);
    }
}