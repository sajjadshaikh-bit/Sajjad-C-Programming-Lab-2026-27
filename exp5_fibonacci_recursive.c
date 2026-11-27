/* Experiment 5: Fibonacci series using recursion */
#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1) return (unsigned long long)n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n, i;
    printf("Enter number of terms (1-40): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 40) {
        printf("Enter a value from 1 to 40.\n");
        return 1;
    }

    for (i = 0; i < n; ++i)
        printf("%llu ", fibonacci(i));
    printf("\n");
    return 0;
}
