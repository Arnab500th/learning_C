#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice;
    char ch;
    while (1){
        printf("\nEnter 1 for lower to upper case conversion\nEnter 2 for upper to lower case conversion\n");
        scanf("%d", &choice);

        if (choice<3) {
            //fflush(stdin);
            // uncomment this above line or we can add a space before %c in scanf

            printf("Enter a character:");
            scanf(" %c", &ch);
            printf("Entered Character: %c", ch);
        }
        switch(choice){
            case 1:
                if (ch >= 'a' && ch <= 'z')
                    ch =ch-32;
                printf("\nAfter changing  case, the character: %c", ch);
                break;
            case 2:
                if (ch >= 'A' && ch <= 'Z')
                    ch =ch + 32;
                printf("\nAfter changing  case, the character: %c", ch);
                break;
            case 3: exit(0);
            default : printf("Enter valid choice ");

        }
    }
}