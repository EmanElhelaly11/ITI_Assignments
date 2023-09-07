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

// Function to add a new node at a specified position
void addNodeAtPosition(struct Node** head, int data, int position) {
    if (position < 0) {
        printf("Invalid position. Position should be non-negative.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        printf("Node added at position 0.\n");
        return;
    }

    struct Node* current = *head;
    int currentPosition = 0;

    while (current != NULL && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Invalid position. Position exceeds the length of the list.\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
    printf("Node added at position %d.\n", position);
}

int main() {
    struct Node* head = NULL;
    int choice;

    while (1) {
        printf("To add node enter: 0\n"); 
        printf("To print the linked list enter: 1\n"); 
        printf("To delete a node enter: 2\n"); 
        printf("To add a node at a specific position enter: 3\n"); 
        printf("To exit press: 4\n"); 
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
            int data, position;
            printf("Enter the value of the node: ");
            scanf("%d", &data);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            addNodeAtPosition(&head, data, position);
            printf("***********************************\n");

        } else if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Incorrect entry. Please enter 0, 1, 2, 3, or 4.\n");
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
