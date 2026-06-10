#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float avrg;

    printf("Enter the number: ");
    scanf("%d", &n);

    // for(initialization_exp; terminating_condition; update_expression)
    for(i = 1; i <= n; i++)   // ++i or i++ = i + 1
    {
        printf("%d\t", i);
        sum = sum + i;        // sum += i;
    }

    avrg = sum / (float)n;

    printf("\nSum and average of natural numbers up to %d are %d and %f",
           n, sum, avrg);

    return 0;
}
