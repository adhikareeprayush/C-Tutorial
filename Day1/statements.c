#include <stdio.h>

int main() {
    // Declaration statement
    int a = 10;
    int b = 20;
    int sum;

    // Expression statement
    sum = a + b;

    // Conditional statement
    if (sum > 20) {
        printf("Sum is greater than 20\n");
    } else {
        printf("Sum is 20 or less\n");
    }

    // Iteration statement
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    // Return statement
    return 0;
}