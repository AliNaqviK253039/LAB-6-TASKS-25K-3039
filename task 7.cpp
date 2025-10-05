#include <stdio.h>

int main() {
    int amount;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    printf("Enter the amount in cents (positive integer): ");
    scanf("%d", &amount);
    if (amount < 0) {
        printf("Please enter a non-negative amount.\n");
        return 1;
    }
    while (amount > 0) {
        if (amount >= 25) {
            amount -= 25;
            quarters++;
        } else if (amount >= 10) {
            amount -= 10;
            dimes++;
        } else if (amount >= 5) {
            amount -= 5;
            nickels++;
        } else {
            amount -= 1;
            pennies++;
        }
    }
    printf("Minimum number of coins:\n");
    printf("Quarters (25cent): %d\n", quarters);
    printf("Dimes (10cent):    %d\n", dimes);
    printf("Nickels (5cent):   %d\n", nickels);
    printf("Pennies (1cent):   %d\n", pennies);

    return 0;
}

