#include <stdio.h>
int main() {
    int h, i, j;
    printf("Enter pyramid height : ");
    if (scanf("%d", &h) != 1 || h <= 0) {
        printf("Invalid height, defaulting to 5.\n");
        h = 5;
    }
    for (i = 0; i < h; i++) {
        for (j = 0; j < h - 1 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
