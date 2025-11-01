#include <stdio.h>
int main() {
    float calories, fat_grams;

    printf("Enter total calories in the food: ");
    scanf("%f", &calories);

    printf("Enter fat grams in the food: ");
    scanf("%f", &fat_grams);

    if (calories < 0 || fat_grams < 0) {
        printf("Error: Calories and fat grams cannot be negative.\n");
    } else {
        float calories_from_fat = fat_grams * 9;

        if (calories_from_fat > calories) {
            printf("Error: Calories from fat cannot exceed total calories.\n");
        } else {
            float fat_percentage = (calories_from_fat / calories) * 100;

            printf("Percentage of calories from fat: %.2f%%\n", fat_percentage);

            if (fat_percentage < 30) {
                printf("This food is low in fat.\n");
            }
        }
    }

    return 0;
}