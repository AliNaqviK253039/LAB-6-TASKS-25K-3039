#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%u", &num);
    while (num > 0) {
        if (num & 1)    
            count++;
        num = num >> 1;  
    }
    printf("Number of 1s in the binary representation: %d\n", count);

    return 0;
}

