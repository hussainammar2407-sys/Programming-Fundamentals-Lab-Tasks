#include <stdio.h>
int main() {
    int num, temp, sum = 0, reversed = 0, divisor; 
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }  
    printf("\nNumber: %d, Sum of digits: %d.\n", num, sum);
    
    if (sum % 2 == 0) {
        int is_prime = 1; 

        if (num <= 1) {
            is_prime = 0;
        } else {
         for (divisor = 2; divisor * divisor <= num; divisor++) {
         if (num % divisor == 0) {
         is_prime = 0;
          break;
                }
            } 
        } 

        if (is_prime) {
            printf("Result: Sum is EVEN, and %d is PRIME.\n", num);
        } else {
            printf("Result: Sum is EVEN, and %d is NOT prime.\n", num);
        }
    } 
    else { 
        temp = num; 
        while (temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }
        if (num == reversed) {
            printf("Result: Sum is ODD, and %d is a PALINDROME.\n", num);
        } else {
            printf("Result: Sum is ODD, and %d is NOT a palindrome.\n", num);
        }
    }
    return 0;
}
