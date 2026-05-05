#include <stdio.h>
// example of switch statement for switch statement
void main(){

    int day;
    printf("\nEnter day in number: ");

    scanf("%d", &day);

    switch(day){
        case 1:
            printf("monday");

        case 2:
            printf("Tuesday");
        case 3:
            printf("Wednesday");
        case 4:
            printf("Thursday");
        case 5:
            printf("Friday");
        case 6:
            printf("Saturday");
        case 7:
            printf("Sunday");
    }
}