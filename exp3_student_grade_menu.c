/* Experiment 3: Menu-driven student grade and result management */
#include <stdio.h>

int main(void) {
    int choice;
    float marks;

    do {
        printf("\n--- STUDENT RESULT MENU ---\n");
        printf("1. Enter marks and display grade\n");
        printf("2. Check pass/fail\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 1;

        switch (choice) {
            case 1:
                printf("Enter marks (0-100): ");
                if (scanf("%f", &marks) != 1) return 1;
                if (marks < 0 || marks > 100) {
                    printf("Invalid marks.\n");
                    break;
                }
                if (marks >= 90) printf("Grade: A+\n");
                else if (marks >= 80) printf("Grade: A\n");
                else if (marks >= 70) printf("Grade: B\n");
                else if (marks >= 60) printf("Grade: C\n");
                else if (marks >= 50) printf("Grade: D\n");
                else printf("Grade: F\n");
                break;
            case 2:
                printf("Enter marks (0-100): ");
                if (scanf("%f", &marks) != 1) return 1;
                if (marks < 0 || marks > 100) printf("Invalid marks.\n");
                else printf("%s\n", marks >= 40 ? "PASS" : "FAIL");
                break;
            case 3:
                printf("Exiting menu.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
