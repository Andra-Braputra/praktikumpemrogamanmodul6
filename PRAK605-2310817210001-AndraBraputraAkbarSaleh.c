#include <stdio.h>

void multiply(int n, int matrix_a[n][n], int matrix_b[n][n], int result_matrix[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result_matrix[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matrix_a[n][n];
    printf("Matrix A\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    int matrix_b[n][n];
    printf("Matrix B\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    int result_matrix[n][n];
    multiply(n, matrix_a, matrix_b, result_matrix);

    printf("Matrix AXB:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
