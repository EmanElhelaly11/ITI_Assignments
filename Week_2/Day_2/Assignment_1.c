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

// Function to delete a node with a specific value
void deleteNode(struct Node** head, int value) {
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the value is found, unlink and free the node
    if (current != NULL) {
        if (prev == NULL) {
            *head = current->next;
        } else {
            prev->next = current->next;
        }
        free(current);
        printf("Node with value %d deleted.\n", value);
    } else {
        printf("Node with value %d not found.\n", value);
    }
}

int main() {
    struct Node* head = NULL;
    int choice;

    while (1) {
        printf("To add node enter: 0\n"); 
        printf("To print the linked list enter: 1\n"); 
        printf("To delete a node enter: 2\n"); 
        printf("To exit press: 3\n"); 
        printf("Your Choice: "); 
        scanf("%d", &choice);

        if (choice == 0) {
            int data;
            printf("Please Enter Node Value: ");
            scanf("%d", &data);
            addNode(&head, data);
            printf("Node Added. Thank You.\n");
            printf("***********************************\n");
        } else if (choice == 1) {
            printf("Linked List: ");
            printList(head);
            printf("***********************************\n");
        } else if (choice == 2) {
            int value;
            printf("Enter the value to delete: ");
            scanf("%d", &value);
            deleteNode(&head, value);
            printf("***********************************\n");
        } else if (choice == 3) {
            printf("Exiting the program.\n");
            printf("***********************************\n");
            break;
        } else {
            printf("Incorrect entry. Please enter 0, 1, 2, or 3.\n");
            printf("***********************************\n");
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
