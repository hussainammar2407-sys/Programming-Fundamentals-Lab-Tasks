#include <stdio.h>
#define SIZE 12
int main() {
    int a[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        a[i] = i * i;
    }
    printf("Array elements (Index Squared):\n");
    for (i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, *(a + i));
    }
    return 0;
}