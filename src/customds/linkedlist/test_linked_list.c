//
// Created by Syed Ibna Zubayear on 30/9/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    struct Node* head = NULL;

    // Insert some nodes at the beginning
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    // Insert a node at the end
    insertAtEnd(head, 40);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    deleteNode(head, 20);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    insertAt(head, 2, 90);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free the memory allocated for the linked list
    freeList(head);

    return 0;
}