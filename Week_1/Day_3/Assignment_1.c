#include <stdio.h>

int max(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int min(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}

int main() {
    int n1, n2, n3, n4;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int maximum = max(n1, n2, n3, n4);
    int minimum = min(n1, n2, n3, n4);
    
    printf("Maximum number: %d\n", maximum);
    printf("Minimum number: %d\n", minimum);
    
    return 0;
}
