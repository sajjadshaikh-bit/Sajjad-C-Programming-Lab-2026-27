/* Experiment 09: Read five student records and display the topper. */
#include <stdio.h>

struct student_record {
    char name[60];
    int roll_number;
    float total_marks;
};

int main(void) {
    struct student_record students[5];
    int topper = 0;
    for (int i = 0; i < 5; ++i) {
        printf("\nStudent %d name (one word): ", i + 1);
        if (scanf("%59s", students[i].name) != 1) return 1;
        printf("Roll number: ");
        if (scanf("%d", &students[i].roll_number) != 1) return 1;
        printf("Total marks: ");
        if (scanf("%f", &students[i].total_marks) != 1) return 1;
        if (i == 0 || students[i].total_marks > students[topper].total_marks) topper = i;
    }
    printf("\nTopper details\nName: %s\nRoll number: %d\nTotal marks: %.2f\n",
           students[topper].name, students[topper].roll_number, students[topper].total_marks);
    return 0;
}
