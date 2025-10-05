#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int xby2 = num << 1;
    int xby4 = num << 2;
    int xby8 = num << 3;

    printf("%d * 2 = %d\n", num, xby2);
    printf("%d * 4 = %d\n", num, xby4);
    printf("%d * 8 = %d\n", num, xby8);

    return 0;
}
