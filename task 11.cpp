#include <stdio.h>
#include <math.h>

int main() {
    double H, theta, L;
    printf("Enter the height of the building (H): ");
    scanf("%lf", &H);
    printf("Enter the angle of elevation of the sun (in radians): ");
    scanf("%lf", &theta);
    L = H / tan(theta);
    printf("The length of the shadow is: %.2lf\n", L);

    return 0;
}

