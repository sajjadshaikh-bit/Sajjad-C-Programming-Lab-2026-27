/* Experiment 7 - Task 2: Add two matrices */
#include <stdio.h>

int main(void) {
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns (1-10): ");
    if (scanf("%d%d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10) return 1;

    printf("Enter first matrix:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    printf("Enter second matrix:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            if (scanf("%d", &b[i][j]) != 1) return 1;

    printf("Sum of matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
