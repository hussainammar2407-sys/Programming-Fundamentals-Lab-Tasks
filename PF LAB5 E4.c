#include <stdio.h>

int main() {
    int num_items, total_charge = 0;
    
    printf("ABC Restaurant Online Order Placement\nWELCOME!\n\n");
    
    printf("Menu:\n");
    printf("B= Burger (Rs. 200)\n");
    printf("F= French Fries (Rs. 50)\n");
    printf("P= Pizza (Rs. 500)\n");
    printf("S= Sandwiches (Rs. 150)\n");

    printf("\nHow many types of snacks to order (1-4): ");
    scanf("%d", &num_items);

    for (int i = 1; i <= num_items; i++) {
        char choice;
        int quantity;
        int unit_price = 0;
        
        printf("Enter item %d choice (B, F, P, S): ", i);
        scanf(" %c", &choice);

        printf("Quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 'B': case 'b': unit_price = 200; break;
            case 'F': case 'f': unit_price = 50; break;
            case 'P': case 'p': unit_price = 500; break;
            case 'S': case 's': unit_price = 150; break;
            default: unit_price = 0; 
        }     
        total_charge += unit_price * quantity;
    }  
    printf("Total Charges: %d PKR\n", total_charge);
    printf("Thank you for your order.\n");

    return 0;
}
