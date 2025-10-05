#include <stdio.h>
#include <math.h>

int main() {
    int numpeople;
    double costperperson = 250.50;
    double total;
    printf("Enter the number of people in the group: ");
    scanf("%d", &numpeople);
    total = ceil(numpeople * costperperson);

    printf("The minimum total cost for the group is: %.0lf rupees\n", total);

    return 0;
}

