/* Experiment 07: Largest element in an array and sum of two matrices. */
#include <stdio.h>
#define MAX 10

int main(void) {
    int n, values[MAX], largest;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) if (scanf("%d", &values[i]) != 1) return 1;
    largest = values[0];
    for (int i = 1; i < n; ++i) if (values[i] > largest) largest = values[i];
    printf("Largest array element = %d\n", largest);

    int rows, cols, a[MAX][MAX], b[MAX][MAX];
    printf("Enter matrix rows and columns (1-%d): ", MAX);
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > MAX || cols < 1 || cols > MAX) return 1;
    printf("Enter first matrix:\n");
    for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) if (scanf("%d", &a[i][j]) != 1) return 1;
    printf("Enter second matrix:\n");
    for (int i = 0; i < rows; ++i) for (int j = 0; j < cols; ++j) if (scanf("%d", &b[i][j]) != 1) return 1;
    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) printf("%d\t", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
