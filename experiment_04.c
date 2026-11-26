/* Experiment 04: Find prime numbers in a range using a function. */
#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int d = 2; d <= n / d; ++d)
        if (n % d == 0) return 0;
    return 1;
}

int main(void) {
    int low, high;
    printf("Enter lower and upper limits: ");
    if (scanf("%d %d", &low, &high) != 2) return 1;
    if (low > high) { int t = low; low = high; high = t; }
    printf("Prime numbers: ");
    for (int n = low; n <= high; ++n)
        if (is_prime(n)) printf("%d ", n);
    printf("\n");
    return 0;
}
