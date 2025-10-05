#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, n, A;
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate (r) in decimal: ");
    scanf("%lf", &r);
    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%lf", &n);
    printf("Enter the number of years (t): ");
    scanf("%lf", &t);
    A = P * pow((1 + r / n), n * t);
    printf("The future value of the investment is: %.2lf\n", A);

    return 0;
}

