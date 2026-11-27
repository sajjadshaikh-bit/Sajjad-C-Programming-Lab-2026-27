/* Experiment 2 - Task 2: Sum odd numbers between two entered numbers */
#include <stdio.h>

int main(void) {
    int first, last, i, sum = 0, temp;
    printf("Enter two integers: ");
    if (scanf("%d%d", &first, &last) != 2) return 1;

    if (first > last) {
        temp = first;
        first = last;
        last = temp;
    }

    for (i = first; i <= last; ++i)
        if (i % 2 != 0) sum += i;

    printf("Sum of odd numbers from %d to %d = %d\n", first, last, sum);
    return 0;
}
