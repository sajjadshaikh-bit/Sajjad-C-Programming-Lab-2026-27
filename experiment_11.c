/* Experiment 11: Simple employee database using file handling. */
#include <stdio.h>

struct employee { int id; char name[60]; float salary; };

int main(void) {
    FILE *file = fopen("employees.txt", "a+");
    struct employee emp;
    int count;
    if (file == NULL) { perror("Unable to open employees.txt"); return 1; }
    printf("How many employee records do you want to add? ");
    if (scanf("%d", &count) != 1 || count < 0) { fclose(file); return 1; }
    for (int i = 0; i < count; ++i) {
        printf("Enter employee ID, name (one word), salary: ");
        if (scanf("%d %59s %f", &emp.id, emp.name, &emp.salary) != 3) {
            fclose(file); return 1;
        }
        fprintf(file, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    }
    rewind(file);
    printf("\nEmployee records stored in employees.txt:\n");
    while (fscanf(file, "%d %59s %f", &emp.id, emp.name, &emp.salary) == 3)
        printf("ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);
    fclose(file);
    return 0;
}
