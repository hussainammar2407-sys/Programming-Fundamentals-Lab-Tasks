#include <stdio.h>
#define SIZE 20
int main() {
    float arr[SIZE] = {10.5, 99.2, 50.1, 75.8, 22.0, 88.3, 15.6, 60.7, 33.9, 45.4, 91.1, 7.7, 80.0, 1.2, 55.5, 67.8, 30.3, 12.1, 40.0, 70.9};
    float *ptr = arr;
    float Highest = -1.0;
    float SecondHighest = -1.0;
    int i;

    for (i = 0; i < SIZE; i++) {
        if (*(ptr + i) > Highest) {
            SecondHighest = Highest;
            Highest = *(ptr + i);
        } else if (*(ptr + i) > SecondHighest && *(ptr + i) < Highest) {
            SecondHighest = *(ptr + i);
        }
    }
    printf("The second highest number in the array is: %.2f\n", SecondHighest);
    return 0;
}