#include <stdio.h>
#include <math.h>

int main() {
    double p, q, entropy;

    // Input probability p for team A winning_
    printf("P? ");
    scanf("%lf", &p);

    // Check if the input is valid
    if (p < 0 || p > 1) {
        //printf("Invalid input. Probability must be between 0 and 1.\n");
        return 1;
    }

    // Calculate probability q for team B winning
    q = 1 - p;

    // Calculate entropy using the formula
    // H = - (p * log2(p) + q * log2(q))
    entropy = - (p * (log(p) / log(2)) + q * (log(q) / log(2)));

    // Output the calculated entropy
    printf("%.6f\n", entropy);

    return 0;
}
