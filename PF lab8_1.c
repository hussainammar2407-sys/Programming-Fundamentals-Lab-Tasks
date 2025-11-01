#include <stdio.h>
#include <string.h>
int main() {
  char first[50], last[50];
  int i;
  printf("Enter first name: ");
  scanf("%s", first);

  printf("Enter last name: ");
   scanf("%s", last);
 printf("Full name backwards: ");

    for (i = strlen(last) - 1; i >= 0; i--) {
        printf("%c", last[i]);
    }
    printf(" ");

    for (i = strlen(first) - 1; i >= 0; i--) {
        printf("%c", first[i]);
    }
    printf("\n");
    return 0;
}
