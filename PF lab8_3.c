#include <stdio.h>
#include <string.h> 
int main() {
    char str1[100], str2[100];
    int i, same = 1;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    if (strlen(str1) != strlen(str2)) {
      same = 0;
    } 
    else {
        for (i = 0; i < strlen(str1); i++) {
     if (str1[i] != str2[i]) {
           same = 0;
            break;
            }
        }
    }

    if (same) {
        printf("Both strings are equal.\n");
    } 
    else {
       if (strlen(str1) > strlen(str2))
           printf("First string is longer.\n");
       else if (strlen(str1) < strlen(str2))
           printf("Second string is longer.\n");
       else
           printf("Strings have equal length but different characters.\n");
    }
    return 0;
}
