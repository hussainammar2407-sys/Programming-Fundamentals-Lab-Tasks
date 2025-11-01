#include <stdio.h>
int main()
{
int arr[5];
int i;
int sum = 0;
int positiveSum = 0;
float average;

printf("Enter 5 numbers:\n");
for(i = 0; i < 5; i++){
printf("Enter number %d: ", i + 1);
scanf("%d", &arr[i]);
}
for(i = 0; i < 5; i++){
sum = sum + arr[i];
if(arr[i] > 0){
positiveSum = positiveSum + arr[i];
}
}
average = (float)sum / 5;
printf("\nSum of all positive numbers is: %d\n", positiveSum);
printf("Average of all numbers is: %.2f\n", average);
return 0;
}