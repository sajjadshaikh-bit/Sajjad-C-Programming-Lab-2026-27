/* Experiment 08: String length without strlen and palindrome check. */
#include <stdio.h>

int main(void) {
    char text[200];
    int length = 0, palindrome = 1;
    printf("Enter a single word: ");
    if (scanf("%199s", text) != 1) return 1;
    while (text[length] != '\0') ++length;
    for (int i = 0; i < length / 2; ++i)
        if (text[i] != text[length - 1 - i]) { palindrome = 0; break; }
    printf("Length = %d\n", length);
    printf("%s\n", palindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}
