#include <stdio.h>

int main() {
    float height, weight, ideal_weight;

    // Input user's height and weight
    printf("Height? ");
    scanf("%f", &height);
    printf("Weight? ");
    scanf("%f", &weight);

    // Calculate the ideal weight using the formula height * height * 22 / 10000
    ideal_weight = (height * height * 22) / 10000;

    // Compare input weight with ideal weight and give advice
    if (weight > ideal_weight + 5) {
        printf("Let's reduce sweets\n");
    } else if (weight < ideal_weight - 5) {
        printf("Eat some more\n");
    } else {
        printf("Go for it\n");
    }

    return 0;
}
