#include <stdio.h>

int main() {
    int number;

    // Input a numbe
    //printf("Enter a number: ");
    scanf("%d", &number);

    // Output message based on whether the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number\n", number);
    } else if (number < 0) {
        printf("%d is a negative number\n", number);
    } else {
        printf("You entered zero\n", number);
    }

    return 0;
}
