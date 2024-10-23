#include <stdio.h>

int main() {
    int x, y;

    // Input two integers
    // printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    // Check which number is larger
    if (x > y) {
        printf("%d\n", x);  // Print x if x is greater
    } else if (y > x) {
        printf("%d\n", y);  // Print y if y is greater
    } else {
        printf("%d\n", x);  // If both are equal, print either x or y
    }

    return 0;
}
