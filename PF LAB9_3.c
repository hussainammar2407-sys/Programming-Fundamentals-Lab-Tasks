#include <stdio.h>
void volumecal(int h, int a) {
    float volume = a * a * (1.0f / 3) * h;
    printf("Volume of the pyramid: %.2f\n", volume);
}

void getData() {
    int h, a;
    printf("Enter height (h): ");
    scanf("%d", &h);
    printf("Enter base length (a): ");
    scanf("%d", &a);
    volumecal(h, a);
}
int main() {
    getData();  
    return 0;
}
