#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Ternary operator: (condition) ? (if true) : (if false)
    printf((num % 2 == 0) ? "\nEVEN\n" : "\nODD\n");

    return 0;
}
