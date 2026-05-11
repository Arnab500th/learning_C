//WAP to check wether entered value is Vowel or consonant

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
        printf("Enetered character %c is a Vowel",c);
    else
        printf("Enetered character %c is a Consonant",c);
    return 0;
}