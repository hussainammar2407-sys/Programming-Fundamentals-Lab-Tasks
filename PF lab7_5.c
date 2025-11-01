#include <stdio.h>
int main() 
{
   int rows, cols;
   printf("Enter number of rows (max 10): ");
   scanf("%d", &rows);
   printf("Enter number of columns (max 10): ");
   scanf("%d", &cols);

    int matrix[10][10];
    int i, j, max;

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
        }
    }
    max = matrix[0][0];

    for (i = 0; i < rows; i++) {
     for (j = 0; j < cols; j++) {
         if (matrix[i][j] > max)
         max = matrix[i][j];
        }
    }
    printf("\nEntered Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nMaximum element in the matrix = %d\n", max);
    return 0;
}
