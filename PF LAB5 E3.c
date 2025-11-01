#include <stdio.h>
int main() {
    float nts, fsc;

    printf("Enter NTS Marks (%%): ");
    scanf("%f", &nts); 

    printf("Enter F.Sc Marks (%%): ");
    scanf("%f", &fsc);
    
    printf("\n--- Selection Result ---\n");
    display_result(nts, fsc);
    return 0;
}

 {
    if (fsc > 70.0) {
        if (nts > 70.0) {
            printf("Allocated to: Oxford - IT\n");
        } else if (nts > 60.0) {
            printf("Allocated to: Oxford - Electronics\n");
        } else if (nts > 50.0) {
            printf("Allocated to: Oxford - Telecommunication\n");
        } else {
            printf("Eligible for Oxford but NTS too low (<50%%) for department.\n");
        }
    } 
    else if (fsc >= 40.0 && nts >= 50.0) {
        if (fsc >= 60.0) {
            printf("Allocated to: MIT - IT\n"); 
        } else if (fsc >= 50.0) {
            printf("Allocated to: MIT - Chemical\n"); 
        } else {
            printf("Allocated to: MIT - Computer\n"); 
        }
    }
    else {
        printf("Not eligible for Oxford or MIT based on low marks.\n");
    }
}
