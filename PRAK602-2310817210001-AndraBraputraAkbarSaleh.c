#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int matrix[size];

    for (int i = 0; i < size; ++i) {
        scanf("%d", &matrix[i]);
    }

    for (int i = 0; i < size; ++i) {
        matrix[i] *= (i + 1);
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", matrix[i]);
    }
    printf("\n");

    return 0;
}
