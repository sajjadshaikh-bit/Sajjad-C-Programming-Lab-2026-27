/* Experiment 10 - Task 2: Print array elements in reverse using pointers */
#include <stdio.h>

int main(void) {
    int a[100], n, i;
    int *ptr;

    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for (i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    printf("Array in reverse order: ");
    ptr = a + n;
    while (ptr > a)
        printf("%d ", *--ptr);
    printf("\n");
    return 0;
}
