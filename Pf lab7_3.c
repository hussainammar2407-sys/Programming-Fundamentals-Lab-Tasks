#include <stdio.h>
#include <string.h>
int main()
{
char firstName[50];
char lastName[50];
char fullName[100];
int length;

printf("Enter your first name: ");
fgets(firstName, 50, stdin);
printf("Enter your last name: ");
fgets(lastName, 50, stdin);

firstName[strcspn(firstName, "\n")] = 0;
lastName[strcspn(lastName, "\n")] = 0;
strcpy(fullName, firstName);
strcat(fullName, " ");
strcat(fullName, lastName);

length = strlen(fullName);

printf("\nFull name: %s\n", fullName);
printf("Number of characters in the full name: %d\n", length);

return 0;
}