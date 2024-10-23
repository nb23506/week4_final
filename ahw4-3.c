#include <stdio.h>
#include <math.h>

void solve_quadratic(int a, int b, int c) {
    // Check if a is 0_
    if (a == 0) {
        if (b != 0) {
            // Solve as a linear equation bx + c = 0
            float solution = (float)-c / b; // Cast to float for accurate division
            printf("%.6f\n", solution);
        } else {
            if (c != 0) {
                printf("No solution exists (b = 0, c ≠ 0).\n");
            } else {
                printf("Infinite solutions exist (b = 0, c = 0).\n");
            }
        }
        return;
    }

    // Calculate the discriminant
    int d = b * b - 4 * a * c;

    if (d < 0) {
        printf("The real solution does not exist\n");
    } else if (d == 0) {
        // One real solution
        float solution = (float)-b / (2 * a); // Cast to float for accurate division
        printf("%.3f\n", solution);
    } else {
        // Two real solutions
        int sqrt_d = sqrt(d);
        int solution1 = (int)(-b + sqrt_d) / (2 * a);
        int solution2 = (int)(-b - sqrt_d) / (2 * a);
        printf("%d %d\n", solution1, solution2);
    }
}

int main() {
    int a, b, c;
    //printf("Enter coefficient a: ");
    scanf("%d", &a);
    //printf("Enter coefficient b: ");
    scanf("%d", &b);
    //printf("Enter coefficient c: ");
    scanf("%d", &c);

    solve_quadratic(a, b, c);

    return 0;
}
