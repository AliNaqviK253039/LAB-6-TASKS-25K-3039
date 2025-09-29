#include <stdio.h>

int main() {
    int input, sum = 0;


    while (1) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &input);

        if (input == 0) {
            break;
        }
        sum += input;

        printf("Current sum: %d\n", sum);
    }
    printf("Final sum: %d\n", sum);

    return 0;
}

