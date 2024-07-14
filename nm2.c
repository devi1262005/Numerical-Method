#include <stdio.h>

double f(double x) {
    // Define the nonlinear equation here
    return x * x - 4; // Example: x^2 - 4 = 0
}

double df(double x) {
    // Define the derivative of the nonlinear equation here
    return 2 * x; // Example: Derivative of x^2 - 4 = 2x
}

int main() {
    double x0;
    printf("Enter initial guess x0: ");
    scanf("%lf", &x0);

    double x = x0;
    double root;
    int iterations = 0;

    printf("Iteration\t Approximation\t\t Function Value\n");

    while (1) {
        iterations++;

        double fx = f(x);
        printf("%d\t\t %.8lf\t\t %.8lf\n", iterations, x, fx);

        if (fx == 0.0) {
            root = x;
            break;
        }

        double dfx = df(x);

        if (dfx == 0.0) {
            printf("Derivative is zero. Cannot continue.\n");
            break;
        }

        x = x - fx / dfx;

        // You can add a convergence check here to break the loop if the approximation is close enough to the root.
        // For example: if (fabs(fx) < epsilon) break;

        // For simplicity, we'll just set a maximum number of iterations.
        if (iterations >= 1000) {
            printf("Maximum iterations reached. No convergence.\n");
            break;
        }
    }

    printf("\nActual Root: %.8lf\n", root);

    return 0;
}
