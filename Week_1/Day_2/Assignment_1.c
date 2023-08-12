#include <stdio.h>

void main() {
    int numbers[10];
    int searchNumber;
    int flag = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &searchNumber);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == searchNumber) {
            printf("Number is found at element number: %d\n", i+1);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("Number does not exist\n");
    }

}
