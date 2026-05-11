//WAP a program to implement bitwise operators

#include<stdio.h>

int main()
{
    unsigned int a = 5, b = 25; // a = 5(00000101), b = 25(00011001)
    printf("a = %d, b = %d\n", a, b);

    printf("a&b = %d\n", a&b); // The result is 00000001
    //1 only if both bits are 1

    printf("a|b = %d\n", a|b); // The result is 00011101
    //1 when any of the two bits is 1

    printf("a^b = %d\n", a^b); // The result is 00011100
    // 1 when two bits are different

    printf("~a = %d\n", a = ~a); // The result is 11111010
    //inverts all bits of it

    printf("b<<1 = %d\n", b<<1); // The result is 00110010

    /*Left shifts the bits of the first operand,
    the second operand decides the number of places to shift*/

    printf("b>>1 = %d\n", b>>1); // The result is 00001100

    /*right shifts the bits of the first operand,
    the second operand decides the number of places to shift*/

    return 0;
}