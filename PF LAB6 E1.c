#include <stdio.h> 
int main() {
    int num;
    long long factorial = 1; 
    int i; 
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (num < 0) {
        printf("\nInput number is negative (%d).\n", num);
        printf("Exiting the program as requested.\n");
        return 1; 
    }
    if (num == 0) {
        factorial = 1;
    } else { 
        for (i = 1; i <= num; i++) {
            factorial *= i;
    }
    printf("\nInput number = %d\n", num);
    printf("Factorial is= %lld\n", factorial);

    return 0; 
}
