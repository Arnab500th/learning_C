// Menu driven program to find area and perimeter of different shapes

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function declarations
void square();
void rect();
void circle();
void triangle();

int main() {
    int opt;

    printf("Enter your choice:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    printf("5. Exit\n");

    scanf("%d", &opt);

    switch (opt) {

        case 1:
            square();
            break;

        case 2:
            rect();
            break;

        case 3:
            circle();
            break;

        case 4:
            triangle();
            break;

        case 5:
            exit(0);

        default:
            printf("Enter valid choice");
    }

    return 0;
}

// Square
void square() {
    float s, area, peri;

    printf("Enter the length of side: ");
    scanf("%f", &s);

    area = s * s;
    peri = 4 * s;

    printf("Area = %.2f\nPerimeter = %.2f\n", area, peri);
}

// Rectangle
void rect() {
    float l, b, area, peri;

    printf("Enter the length: ");
    scanf("%f", &l);

    printf("Enter the breadth: ");
    scanf("%f", &b);

    area = l * b;
    peri = 2 * (l + b);

    printf("Area = %.2f\nPerimeter = %.2f\n", area, peri);
}

// Circle
void circle() {
    float r, area, circum;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    printf("Area = %.2f\nCircumference = %.2f\n", area, circum);
}

// Triangle
void triangle() {
    float a, b, c, s, area, peri;

    printf("Enter 1st side: ");
    scanf("%f", &a);

    printf("Enter 2nd side: ");
    scanf("%f", &b);

    printf("Enter 3rd side: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    peri = a + b + c;

    printf("Area = %.2f\nPerimeter = %.2f\n", area, peri);
}2