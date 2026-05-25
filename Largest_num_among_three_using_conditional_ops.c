#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter first num : ");
    scanf("%d", &a);
    printf("Enter second num : ");
    scanf("%d", &b);
    printf("Enter third num : ");
    scanf("%d", &c);

    // Finding largest using nested conditional (ternary) operator
    // Logic: If a>b, check if a>c. If yes, a is max, else c is max.
    //        Else (b>a), check if b>c. If yes, b is max, else c is max.
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the result
    printf("\n%d is the largest number.\n", max);

    return 0;
}
