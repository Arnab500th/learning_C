// WAP for arithmetic calculator using switch case

#include <stdio.h>

int main() {

    char op;
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {

        case '+':
            printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, a + b);
            break;

        case '-':
            printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, a - b);
            break;

        case '*':
            printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, a * b);
            break;

        case '/':
            if (b != 0)
                printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, a / b);
            else
                printf("Error: Division by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
