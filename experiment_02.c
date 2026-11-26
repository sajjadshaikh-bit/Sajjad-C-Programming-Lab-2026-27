/* Experiment 02: Sum odd numbers between two entered numbers. */
#include <stdio.h>

int main(void) {
    int first, last, sum = 0;
    printf("Enter two integers (range): ");
    if (scanf("%d %d", &first, &last) != 2) return 1;
    if (first > last) { int temp = first; first = last; last = temp; }
    for (int n = first; n <= last; ++n) {
        if (n % 2 != 0) sum += n;
    }
    printf("Sum of odd numbers from %d to %d = %d\n", first, last, sum);
    return 0;
}
