#include <stdio.h>
int main() {
    float cost, saved_amount, final_amount;

    printf("Enter the total cost of your shopping: ");
    scanf("%f", &cost);

    if (cost > 1999 && cost <= 4000) {
        saved_amount = cost * 0.20;
    } else if (cost > 4000 && cost <= 6000) {
        saved_amount = cost * 0.30;
    } else if (cost > 6000) {
        saved_amount = cost * 0.50;
    } else {
        saved_amount = 0;
    }

    final_amount = cost - saved_amount;

    printf("\n Discount Details \n");
    printf("Actual amount: $%.2f\n", cost);
    printf("Saved amount: $%.2f\n", saved_amount);
    printf("Amount after discount: $%.2f\n", final_amount);

    return 0;
}
