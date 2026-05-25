// application of local and global variables

#include <stdio.h>

int a = 55;
int d = 66;

int sum(int a, int b);
void display();

int main() {

    int a = 10;
    int b = 20, c;

    printf("Values of d in main() = %d\n", d); // 66
    printf("Values of a in main() = %d\n", a); // 10

    c = sum(a, b);

    printf("Value of c in main() = %d\n", c);

    display();

    return 0;
}

int sum(int a, int b) {

    printf("Values of a in sum() = %d\n", a); // 10
    printf("Values of b in sum() = %d\n", b); // 20

    return a + b;
}

void display() {

    int d = 100;

    printf("Values of a in display() = %d\n", a); // 55
    printf("Values of d in display() = %d\n", d); // 100
}
