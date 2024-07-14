#include <stdio.h>

double f(double x) {
    // Define the nonlinear equation here
    return x*x - 4; // Example: x^2 - 4 = 0
}

int main() {
    double a, b;
    printf("Enter interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    while (f(a) * f(b) > 0) {
        printf("Invalid interval. Enter again: ");
        scanf("%lf %lf", &a, &b);
    }

    double root;
    int iterations = 0;

    printf("Iteration\t a\t\t b\t\t Root\n");

    while (b - a >= 0.0001) {
        double mid = (a + b) / 2;

        iterations++;

        printf("%d\t\t %.5lf\t %.5lf\t %.5lf\n", iterations, a, b, mid);

        if (f(mid) == 0.0) {
            root = mid;
            break;
        }
        else if (f(mid) * f(a) < 0) {
            b = mid;
        }
        else {
            a = mid;
        }
    }

    printf("\nActual Root: %lf\n", (a+b)/2);

    return 0;
}
