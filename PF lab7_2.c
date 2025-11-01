#include <stdio.h>
int main()
{
int m, n;
int matrix[10][10];
int i, j;
int zeroCount = 0;
int totalElements;

printf("Enter the number of rows (m, max 10): ");
scanf("%d", &m);
printf("Enter the number of columns (n, max 10): ");
scanf("%d", &n);
if (m > 10 || n > 10 || m <= 0 || n <= 0) {
printf("Invalid dimensions. Exiting.\n");
return 1;
}

printf("\nEnter matrix elements:\n");
for(i = 0; i < m; i++){
for(j = 0; j < n; j++){
printf("Enter element [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
if(matrix[i][j] == 0){
zeroCount++;
       }
   }
}

totalElements = m * n;
printf("\nTotal elements: %d\n", totalElements);
printf("Total zero elements (T): %d\n", zeroCount);

if (zeroCount >= (totalElements / 2.0)) {
printf("The matrix is a Sparse matrix.\n");
} else {
printf("The matrix is not a Sparse matrix.\n");
}
return 0;
}