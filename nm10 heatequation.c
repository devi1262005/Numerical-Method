#include <stdio.h>
#include <math.h>

#define X 8
#define T 5

float fun(int a) {
    return (4 * a - (a * a) / 2.0);
}

int main() {
    float u[X + 1][T + 1];
    float h = 1.0, k = 0.0125, c, al, us, ue;

    // Input: square of 'c'
    printf("\nEnter the square of 'c': ");
    scanf("%f", &c);

    al = c * k / pow(h, 2);

    // Input: values of u[0, t] and u[X, t]
    printf("Enter the value of u[0, t]: ");
    scanf("%f", &us);
    printf("Enter the value of u[%d, t]: ", X);
    scanf("%f", &ue);

    // Initial conditions
    for (int i = 0; i <= T; i++) {
        u[0][i] = u[X][i] = us;
    }

    for (int j = 1; j <= X - 1; j++) {
        u[j][0] = fun(j);
    }

    // Finite difference scheme
    for (int i = 0; i <= T - 1; i++) {
        for (int j = 1; j <= X - 1; j++) {
            u[j][i + 1] = al * u[j - 1][i] + (1 - 2 * al) * u[j][i] + al * u[j + 1][i];
        }
    }

    // Output: values of u[j, i]
    printf("\nThe value of alpha is %4.2f\n", al);
    printf("The values of u[j, i] are:\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < X; j++) {
            printf("%7.4f\t", u[j][i]);
        }
        printf("\n");
    }

    return 0;
}
