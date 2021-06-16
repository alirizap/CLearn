#include <stdio.h>

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main(void) {
    int a = 21;
    int b = 84;

    swap(&a, &b);
    printf("a : %d, b : %d", a, b);
    return 0;
}