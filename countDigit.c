#include <stdio.h>
int main(){
    long long int n;
    int i = 0;
    printf("Enter an integer:");
    scanf( "%lld", &n );
    while(n !=0){
        n = n /10;
        i++;
    }
    printf("Number of digits is %d",i);
    return 0;
}