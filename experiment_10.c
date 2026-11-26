/* Experiment 10: Add two numbers and reverse-print an array using pointers. */
#include <stdio.h>
#define MAX 100

int main(void) {
    int a, b, values[MAX], n;
    int *pa = &a, *pb = &b;
    printf("Enter two integers: ");
    if (scanf("%d %d", pa, pb) != 2) return 1;
    printf("Sum = %d\n", *pa + *pb);

    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) if (scanf("%d", values + i) != 1) return 1;
    printf("Array in reverse order: ");
    for (int *p = values + n; p > values; ) printf("%d ", *--p);
    printf("\n");
    return 0;
}
