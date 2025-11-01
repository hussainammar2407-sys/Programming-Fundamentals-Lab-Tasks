#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, original_number;

    printf("Enter an integer to check for divisibility by 7: ");
    scanf("%d", &number);

    original_number = number;

    while (number > 99) {
        int last_digit = abs(number % 10);
        int remaining_digits = number / 10;
        number = remaining_digits - (2 * last_digit);
    }

    if (number % 7 ==0) {
        printf("%d is divisible by 7.\n", original_number);
    } else {
        printf("%d is not divisible by 7.\n", original_number);
    }

    return 0;
}
