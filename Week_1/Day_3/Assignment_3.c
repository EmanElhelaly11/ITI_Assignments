#include <stdio.h>

void main() {
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];
    int min = numbers[0];
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > max) {
           max=numbers[i];
        }
        if (numbers[i] < min) {
           min=numbers[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

}
