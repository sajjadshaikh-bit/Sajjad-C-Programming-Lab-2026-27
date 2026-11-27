/* Experiment 1 - Task 2: PCM average and admission eligibility */
#include <stdio.h>

int main(void) {
    float physics, chemistry, maths, average;

    printf("Enter marks in Physics (out of 100): ");
    if (scanf("%f", &physics) != 1) return 1;
    printf("Enter marks in Chemistry (out of 100): ");
    if (scanf("%f", &chemistry) != 1) return 1;
    printf("Enter marks in Maths (out of 100): ");
    if (scanf("%f", &maths) != 1) return 1;

    average = (physics + chemistry + maths) / 3.0f;
    printf("\nAverage PCM marks = %.2f%%\n", average);
    printf("Status: %s\n", average >= 50.0f ?
           "ELIGIBLE for admission" : "NOT ELIGIBLE for admission");
    return 0;
}
