/* Experiment 5: Fibonacci series using an iterative method */
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long first = 0, second = 1, next;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Enter a positive number of terms.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        printf("%llu ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
