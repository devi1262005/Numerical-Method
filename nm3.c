#include <stdio.h>
#include <math.h>

void normalizeVector(float vector[], int size) {
    float max = fabs(vector[1]);

    for (int i = 2; i <= size; i++) {
        if (fabs(vector[i]) > max) {
            max = fabs(vector[i]);
        }
    }

    for (int i = 1; i <= size; i++) {
        vector[i] = round(10 * vector[i] / max) / 10;
    }
}

int isConverged(float currentVector[], float previousVector[], int size) {
    for (int i = 1; i <= size; i++) {
        if (currentVector[i] != previousVector[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("\nEnter the order of matrix:");
    scanf("%d", &n);

    float a[40][40], x[40], z[40], p[40];

    printf("\nEnter matrix elements row-wise\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nEnter the column vector\n");
    for (int i = 1; i <= n; i++) {
        scanf("%f", &x[i]);
    }

    while (1) {
        for (int i = 1; i <= n; i++) {
            p[i] = z[i];
        }

        for (int i = 1; i <= n; i++) {
            z[i] = 0;
            for (int j = 1; j <= n; j++) {
                z[i] += a[i][j] * x[j];
            }
        }

        normalizeVector(z, n);

        if (isConverged(z, p, n)) {
            break;
        }

        for (int i = 1; i <= n; i++) {
            x[i] = z[i];
        }
    }

    printf("\nThe required eigen value is %.1f\n", fabs(z[1]));
    printf("\n\nThe required eigen vector is:\n");
    for (int i = 1; i <= n; i++) {
        printf("%.1f\t", z[i]);
    }

    return 0;
}

