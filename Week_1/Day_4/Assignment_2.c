#include <stdio.h>

void main() {
    int x = 10, y = 20, z = 30;
    int *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;

    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("p: %p, q: %p, r: %p\n", (void *)p, (void *)q, (void *)r);
    printf("*p: %d, *q: %d, *r: %d\n", *p, *q, *r);

    printf("Swapping pointers\n");

    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("p: %p, q: %p, r: %p\n", (void *)p, (void *)q, (void *)r);
    printf("*p: %d, *q: %d, *r: %d\n", *p, *q, *r);

}
