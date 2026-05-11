//WAP to check wether the user given  char is a aphabet or number or white space or symbol

#include <stdio.h>

int main() {
    char c;
    printf("Enter a characrer:");
    scanf("%c", &c);

    if ((c>= 'a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an Alphabet",c);
    else if (c>= '0' && c<='9')
        printf("%c is a number",c);
    else if (c==' ' || c== '\t' || c=='\n')
        printf("%c is a white space",c);
    else
        printf("%c is a symbol", c);
    return 0;
}

