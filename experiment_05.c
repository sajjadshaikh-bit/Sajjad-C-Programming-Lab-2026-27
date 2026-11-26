/* Experiment 05: Fibonacci series using iterative and recursive methods. */
#include <stdio.h>

unsigned long long fib_recursive(unsigned int n) {
    if (n < 2) return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main(void) {
    unsigned int terms;
    unsigned long long a = 0, b = 1;
    printf("Enter number of terms (1-45 recommended): ");
    if (scanf("%u", &terms) != 1 || terms == 0 || terms > 45) {
        printf("Please enter a value from 1 to 45.\n");
        return 1;
    }
    printf("Iterative: ");
    for (unsigned int i = 0; i < terms; ++i) {
        printf("%llu ", a);
        unsigned long long next = a + b; a = b; b = next;
    }
    printf("\nRecursive: ");
    for (unsigned int i = 0; i < terms; ++i) printf("%llu ", fib_recursive(i));
    printf("\n");
    return 0;
}
