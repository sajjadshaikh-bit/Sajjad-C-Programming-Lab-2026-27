/* Experiment 10 - Task 1: Add two numbers using pointers */
#include <stdio.h>

int main(void) {
    int a, b, sum;
    int *p = &a, *q = &b;

    printf("Enter two integers: ");
    if (scanf("%d%d", p, q) != 2) return 1;
    sum = *p + *q;

    printf("Sum = %d\n", sum);
    return 0;
}
