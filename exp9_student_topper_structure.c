/* Experiment 9: Store five student records and display the topper */
#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main(void) {
    struct student_record students[5];
    int i, topper = 0;

    for (i = 0; i < 5; ++i) {
        printf("\nStudent %d name: ", i + 1);
        if (scanf(" %49[^\n]", students[i].name) != 1) return 1;
        printf("Roll number: ");
        if (scanf("%d", &students[i].roll_number) != 1) return 1;
        printf("Total marks: ");
        if (scanf("%f", &students[i].total_marks) != 1) return 1;
        if (students[i].total_marks > students[topper].total_marks)
            topper = i;
    }

    printf("\nTopper details\n");
    printf("Name: %s\n", students[topper].name);
    printf("Roll number: %d\n", students[topper].roll_number);
    printf("Total marks: %.2f\n", students[topper].total_marks);
    return 0;
}
