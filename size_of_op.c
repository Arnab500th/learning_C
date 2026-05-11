//WAP to illustrate the use of size of operators

#include <stdio.h>

int main() {
    int i; float f; double d; char c;
    printf("\nEnter one character Data:");
    scanf("%c", &c);
    printf("\nEnter one integer Data:");
    scanf("%d", &i);
    printf("\nEnter one float Data:");
    scanf("%f", &f);
    printf("\nEnter one double Data:");
    scanf("%lf", &d);

    printf("\nsize of char: %d", sizeof(c));
    printf("\nsize of char: %d", sizeof(i));
    printf("\nsize of char: %d", sizeof(f));
    printf("\nsize of char: %d", sizeof(d));
    return 0;
}