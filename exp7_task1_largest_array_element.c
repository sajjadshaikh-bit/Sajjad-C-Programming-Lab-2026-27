/* Experiment 7 - Task 1: Find the largest element in an array */
#include <stdio.h>

int main(void) {
    int a[100], n, i, largest;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for (i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    largest = a[0];
    for (i = 1; i < n; ++i)
        if (a[i] > largest) largest = a[i];

    printf("Largest element = %d\n", largest);
    return 0;
}
