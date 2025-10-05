#include <stdio.h>
#include <math.h> 
int main() {
    double intensity, standard, magnitude;

    printf("Enter the intensity of the earthquake (I): ");
    scanf("%lf", &intensity);

    printf("Enter the standard reference value (S): ");
    scanf("%lf", &standard);
    if (intensity <= 0 || standard <= 0) {
        printf("Both intensity and standard must be positive values.\n");
    }

    magnitude = log10(intensity / standard);

    printf("The magnitude of the earthquake is: %.2f\n", magnitude);

    return 0;
}

