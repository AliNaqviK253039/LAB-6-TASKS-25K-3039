#include <stdio.h>

int main() {
    int balance = 50000;
    int withdraw;

    printf("Welcome to the ATM!\n");
    printf("Your starting balance is: %d\n", balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%d", &withdraw);

        if (withdraw <= 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else if (withdraw > balance) {
            printf("Insufficient balance! You have only %d left.\n", balance);
        } else {
            balance -= withdraw;
            printf("Withdrawal successful. Remaining balance: %d\n", balance);
        }
    }

    printf("\nYour balance is zero. No further withdrawals possible.\n");
    printf("Thank you for using the ATM.\n");

    return 0;
}

