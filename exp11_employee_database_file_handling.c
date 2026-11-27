/* Experiment 11: Simple employee database using file handling */
#include <stdio.h>
#include <stdlib.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main(void) {
    FILE *file;
    struct employee emp;
    int choice;

    do {
        printf("\n--- EMPLOYEE DATABASE ---\n");
        printf("1. Add employee\n2. Display employees\n3. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 1;

        if (choice == 1) {
            file = fopen("employees.txt", "a");
            if (file == NULL) {
                perror("Unable to open employees.txt");
                return 1;
            }
            printf("Employee ID: ");
            if (scanf("%d", &emp.id) != 1) { fclose(file); return 1; }
            printf("Employee name: ");
            if (scanf(" %49[^\n]", emp.name) != 1) { fclose(file); return 1; }
            printf("Salary: ");
            if (scanf("%f", &emp.salary) != 1) { fclose(file); return 1; }
            fprintf(file, "%d,%s,%.2f\n", emp.id, emp.name, emp.salary);
            fclose(file);
            printf("Employee record saved.\n");
        } else if (choice == 2) {
            char line[160];
            file = fopen("employees.txt", "r");
            if (file == NULL) {
                printf("No employee records found yet.\n");
                continue;
            }
            printf("\nID, Name, Salary\n");
            while (fgets(line, sizeof line, file) != NULL)
                fputs(line, stdout);
            fclose(file);
        } else if (choice != 3) {
            printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
