/* Experiment 03: Menu-driven student grade/result system using switch and goto. */
#include <stdio.h>

int main(void) {
    char name[60];
    int roll, choice;
    float m1, m2, m3, average;
    printf("Enter student name (one word): ");
    if (scanf("%59s", name) != 1) return 1;
    printf("Enter roll number: ");
    if (scanf("%d", &roll) != 1) return 1;

menu:
    printf("\n--- Student Result Menu ---\n1. Enter marks and calculate result\n2. Display student details\n3. Exit\nChoose: ");
    if (scanf("%d", &choice) != 1) return 1;
    switch (choice) {
        case 1:
            printf("Enter marks in three subjects (0-100): ");
            if (scanf("%f %f %f", &m1, &m2, &m3) != 3) return 1;
            if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
                printf("Invalid marks. Try again.\n");
            } else {
                average = (m1 + m2 + m3) / 3.0f;
                printf("Average: %.2f\n", average);
                if (m1 >= 40 && m2 >= 40 && m3 >= 40)
                    printf("Result: PASS | Grade: %c\n", average >= 75 ? 'A' : average >= 60 ? 'B' : average >= 50 ? 'C' : 'D');
                else printf("Result: FAIL\n");
            }
            goto menu;
        case 2:
            printf("Name: %s\nRoll number: %d\n", name, roll);
            goto menu;
        case 3:
            printf("Exiting result system.\n");
            break;
        default:
            printf("Invalid choice.\n");
            goto menu;
    }
    return 0;
}
