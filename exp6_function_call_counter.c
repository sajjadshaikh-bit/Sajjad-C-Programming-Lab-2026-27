/* Experiment 6: Count function calls using a static storage class */
#include <stdio.h>

void counter(void) {
    static int calls = 0;
    ++calls;
    printf("Function called %d time(s).\n", calls);
}

int main(void) {
    int n, i;
    printf("How many times should the function be called? ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    for (i = 0; i < n; ++i)
        counter();
    return 0;
}
