#include <stdio.h>
#include <ctype.h>

double T(char type, char size) {
    double time;
    switch (toupper(type)) {
        case 'W':
            time = 76.0; 
            break;
        case 'B':
            time = 105.0; 
            break;
        default:
            return -1.0; 
    }

    if (toupper(size) == 'D') {
        time *= 1.5; 
    }
    
    return time;
}

int main() {
    char type, size, mode;
    double final_time;

    printf("Enter Type(B/W), Size(D/S), Mode(M/A): ");
    if (scanf(" %c %c %c", &type, &size, &mode) != 3) {
         return 1;
    }

    final_time = T(type, size);

    if (final_time >= 0.0) {
        printf("Mode: %c. Time: %.2f mins.\n", toupper(mode), final_time);
    } else {
        printf("Invalid Type.\n");
    }

    return 0;
}
