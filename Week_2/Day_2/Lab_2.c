#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node to the end of the linked list
void addNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice;

    while (1) {
        printf("To add node enter: 0\n"); 
        printf("To print the linked list enter: 1\n"); 
        printf("To exit press: 2\n"); 
        printf("Your Choice: "); 
        scanf("%d", &choice);

        if (choice == 0) {
            int data;
            printf("Please Enter Node Value: ");
            scanf("%d", &data);
            addNode(&head, data);
            printf("Node Added Thank You\n");
        } else if (choice == 1) {
            printf("Linked List: ");
            printList(head);
        } else if (choice == 2) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Incorrect entry. Please enter 0, 1, or 2.\n");
        }
    }

    // Free memory allocated for the linked list
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
