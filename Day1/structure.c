#include <stdio.h>

// Function declaration
void greet();

int main() {
    // Variable declaration
    int number = 10;

    // Function call
    greet();

    // Print statement
    printf("The number is: %d\n", number);

    return 0;
}

// Function definition
void greet() {
    printf("Hello, welcome to the C programming tutorial!\n");
}