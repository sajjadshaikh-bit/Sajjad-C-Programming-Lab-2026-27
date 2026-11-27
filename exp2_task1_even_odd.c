/* Experiment 2 - Task 1: Check whether an integer is even or odd */
#include <stdio.h>

int main(void) {
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number % 2 == 0)
        printf("%d is an EVEN number.\n", number);
    else
        printf("%d is an ODD number.\n", number);
    return 0;
}
