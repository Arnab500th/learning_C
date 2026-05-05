// C program to checck whether a number is even or odd using ternary conditional operator
#include <stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("The number is EVEN\n") : printf("The number is ODD\n");

    printf((num%10==0) ? "Divisible by 10" : "not divisible by 10");


    return 0;
    // ternary operator -has 3 variables involved kind of an short-hand if-else statement
    //SYNTAX:  expression ? if true : if false

}