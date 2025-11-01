#include <stdio.h>


void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp;

  temp = *bPtr;
  *bPtr = *aPtr;
  *aPtr = *cPtr;
  *cPtr = temp;
}

int main() {
  int a = 10;
   int b = 20;
  int c = 30;

    printf("Original values:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    swaped(&a, &b, &c);
    printf("Values after swaped() function:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}