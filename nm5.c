#include <stdio.h>

void gaussJordanElimination(float matrix[3][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (k != i) {
                float factor = matrix[k][i] / matrix[i][i];
                for (int j = i; j <= n; j++) {
                    matrix[k][j] -= factor * matrix[i][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        float divisor = matrix[i][i];
        for (int j = i; j <= n; j++) {
            matrix[i][j] /= divisor;
        }
    }

    printf("Gauss-Jordan Elimination Result:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3; // Change this value based on the size of the system of equations
    float matrix[3][4] = {
        {2, -1, 1, 8},
        {-3, 4, -1, 5},
        {-1, 1, 3, 9}
    };

    gaussJordanElimination(matrix, n);

    return 0;
}
