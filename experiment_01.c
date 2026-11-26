/* Experiment 01: Demonstrate input, output and operators. */
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("\nInput values: a = %d, b = %d\n", a, b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if (b != 0) {
        printf("Division: %.2f\n", (double)a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Division and remainder are undefined when b is zero.\n");
    }
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("Logical (a && b): %d\n", a && b);
    printf("Conditional operator: %s\n", (a >= b) ? "a is greater or equal" : "b is greater");
    return 0;
}
