#include <stdio.h>
void assignposition(int marks, int experience) {
   if (marks >= 70 && experience >= 2) {
        printf("Position assigned: Associate Developer\n");
   } else if (marks >= 60 && experience >= 1) {
       printf("Position assigned: Assistant Developer\n");
   } else if (marks >= 50) {
       printf("Position assigned: Trainee Engineer\n");
   } else {
        printf("Not Selected\n");
    }
}

int main() {
    int marks, experience = 0;
    printf("Enter test marks: ");
    scanf("%d", &marks);
    if (marks >= 60) {
      printf("Enter years of experience: ");
      scanf("%d", &experience);
    }
     assignposition(marks, experience);
    return 0;
}
