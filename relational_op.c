//WAP to illustrate the use of Relational operators

#include <stdio.h>

int main() {
    int a = 2, b = 2, c = 5;
    printf("%d == %d is %d \n",a ,b, a==b);
    printf("%d == %d is %d \n",a ,c, a==c);
    printf("_______________________________\n");
    printf("%d > %d is %d \n",a ,b, a>b);
    printf("%d > %d is %d \n",c,a, c>a);
    printf("_______________________________\n");
    printf("%d < %d is %d \n",a,b, a<b);
    printf("%d < %d is %d \n",a,c, a<c);
    printf("_______________________________\n");
    printf("%d != %d is %d \n",a,b, a!=b);
    printf("%d != %d is %d \n",a,c, a!=c);
    printf("_______________________________\n");
    printf("%d >= %d is %d \n",a,b, a>=b);
    printf("%d >= %d is %d \n",a,c, a>=c);
    printf("_______________________________\n");
    printf("%d <= %d is %d \n",a,b, a<=b);
    printf("%d <= %d is %d \n",a,c, a<=c);
    printf("_______________________________\n");

    return 0;
}