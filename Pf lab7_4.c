#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  int matrix[10][10], transpose[10][10];
  int i, j, symmetric = 1;

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         transpose[j][i] = matrix[i][j];
        }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
       if (matrix[i][j] != transpose[i][j]) {
        symmetric = 0;
         break;
            }
        }
    }
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    if (symmetric)
        printf("\nMatrix is symmetric.\n");
    else
        printf("\nMatrix is asymmetric.\n");

    return 0;
}
