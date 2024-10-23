#include <stdio.h>

int main() {
    int x, y, z, max;

    // Input three integers
    //printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Find the maximum value
    max = x; // Assume x is the maximum for now

    if (y > max) {
        max = y; // Update max if y is greater
    }
    if (z > max) {
        max = z; // Update max if z is greater
    }

    // Display the maximum value
    printf("Max is %d\n", max);

    return 0;
}
