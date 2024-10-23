#include <stdio.h>

int main() {
    int number;

    // Input from user
    //printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero0
    if (number > 0) {
        printf("Positive");
    } else if (number < 0) {
        printf("Negative or zero");
    } else {
        printf("Negative or zero\n");
    }

    return 0;
}
