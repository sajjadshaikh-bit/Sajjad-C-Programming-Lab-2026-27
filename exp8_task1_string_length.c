/* Experiment 8 - Task 1: Find string length without strlen() */
#include <stdio.h>

int main(void) {
    char str[200];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL) return 1;
    while (str[length] != '\0' && str[length] != '\n')
        ++length;

    printf("Length of the string = %d\n", length);
    return 0;
}
