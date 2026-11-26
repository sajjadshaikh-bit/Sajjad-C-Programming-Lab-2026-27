/* Experiment 06: Count function calls using storage classes. */
#include <stdio.h>

void counter(void) {
    static int calls = 0; /* Retains its value between function calls. */
    ++calls;
    printf("Function has been called %d time(s).\n", calls);
}

int main(void) {
    int times;
    printf("How many times should counter() be called? ");
    if (scanf("%d", &times) != 1 || times < 1) return 1;
    for (int i = 0; i < times; ++i) counter();
    return 0;
}
