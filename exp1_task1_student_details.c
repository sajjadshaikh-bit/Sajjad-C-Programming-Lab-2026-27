/* Experiment 1 - Task 1: Print student details using escape sequences */
#include <stdio.h>

int main(void) {
    int age;
    char class_name[30], division[10];

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 1;
    printf("Enter class and semester (example: FE Sem 1): ");
    if (scanf(" %29[^\n]", class_name) != 1) return 1;
    printf("Enter division: ");
    if (scanf(" %9s", division) != 1) return 1;

    printf("\n\t*** STUDENT DETAILS ***\n");
    printf("\t-----------------------\n");
    printf("Name\t\t: Sajjad Shaikh\n");
    printf("Age\t\t: %d years\n", age);
    printf("Class\t\t: %s\n", class_name);
    printf("Division\t: %s\n", division);
    printf("UIN\t\t: 261C058\n");
    return 0;
}
