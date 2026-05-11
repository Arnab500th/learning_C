//WAP to implement logical Operators

#include <stdio.h>

int main() {
    
    int m=1000, n = 100, p=5;
    if (m>n && m!=0)
        printf("\n&& Operator : Both Contitions are True.\n");
    else
        printf("\n&& Operator : Both Contitions are False or any one of them are False.\n");

    if (n>p || p!= 0)
        printf("\n|| Operator : Only one Contition is True.\n");
    else
        printf("\n|| Operator : Both are False.\n");

    if (m>n && m!=0)
        printf("\n! Operator : one of them or both conditions are False and atleast it is inverted as True.\n");
    else
        printf("! Operator : Both Conditions are True. But it is inverted as False.\n");

    return 0;
}