#include <stdio.h>

void SortFunction(int *arr, int size, int order) {
    int i;
    int j;
    int temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (order == 1) {
                if (*(arr + j) > *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            } else if (order == 2) {
                if (*(arr + j) < *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
    }
}

int main() {
    int arr[] = {50, 20, 40, 10, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: 50, 20, 40, 10, 30\n");

    SortFunction(arr, size, 1);
    printf("Array sorted in Ascending Order (1):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SortFunction(arr, size, 2);
    printf("Array sorted in Descending Order (2):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}