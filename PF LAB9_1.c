#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void CountFrequency(int arr[], int size) {
    int frequency[11] = {0};     
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }  
    printf("Value : Frequency\n");
    for (int i = 0; i <= 10; i++) {
        if (frequency[i] > 0) {
    printf("%d : %d\n", i, frequency[i]);
        }
    }
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array1[size];
    srand(time(NULL));
    
    for (int i = 0; i < size; i++) {
        array1[i] = rand() % 11;
    }
    CountFrequency(array1, size);
    return 0;
}
