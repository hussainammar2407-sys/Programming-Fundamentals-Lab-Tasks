#include <stdio.h>

int main() {
  int arr[] = {7, 10, 14, 26, 30};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  int *ptr = arr;
  int i;
  
    for (i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    printf("The elements in the array are: 7, 10, 14, 26, 30\n");
    printf("The sum of all elements using pointers is: %d\n", sum);
    return 0;
}