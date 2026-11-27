/* Experiment 8 - Task 2: Check whether a string is a palindrome */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int left = 0, right, palindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL) return 1;
    str[strcspn(str, "\n")] = '\0';
    right = (int)strlen(str) - 1;

    while (left < right) {
        if (tolower((unsigned char)str[left]) !=
            tolower((unsigned char)str[right])) {
            palindrome = 0;
            break;
        }
        ++left;
        --right;
    }

    printf("%s\n", palindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}
