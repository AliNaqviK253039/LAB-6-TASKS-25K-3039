#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;
    printf("Enter the number of participants: ");
    scanf("%d", &n);
   if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
            for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Total arrangements = %d\n", factorial);
    }

    return 0;
}

