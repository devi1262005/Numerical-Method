#include <stdio.h>

void gaussianElimination(float matrix[3][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) {
            float factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j <= n; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    printf("Gaussian Elimination Result:\n");
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

    gaussianElimination(matrix, n);

    return 0;
}
