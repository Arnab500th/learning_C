#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;   // sum += i;
        i++;
    }

    printf("\nSum of natural numbers up to %d are %d", n, sum);

    return 0;
}
