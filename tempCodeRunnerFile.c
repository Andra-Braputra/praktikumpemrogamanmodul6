#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int matrix[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
