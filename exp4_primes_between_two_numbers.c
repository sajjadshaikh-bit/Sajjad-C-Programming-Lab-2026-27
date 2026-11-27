/* Experiment 4: Display all prime numbers between two integers */
#include <stdio.h>

int is_prime(int n) {
    int divisor;
    if (n < 2) return 0;
    for (divisor = 2; divisor <= n / divisor; ++divisor)
        if (n % divisor == 0) return 0;
    return 1;
}

int main(void) {
    int first, last, i, temp;
    printf("Enter two integers: ");
    if (scanf("%d%d", &first, &last) != 2) return 1;
    if (first > last) {
        temp = first; first = last; last = temp;
    }

    printf("Prime numbers between %d and %d:\n", first, last);
    for (i = first; i <= last; ++i)
        if (is_prime(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
