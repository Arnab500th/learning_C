#include <stdio.h>
#include <stdlib.h>

void C_to_F(double C){
    double F;
    F=(C*(9/5))+32;
    printf("%lf degree in C is %lf degree in Farhenhite",C,F);

}

void F_to_C(double F){
    double C;
    C=(F-32)*5/9;
    printf("%lf degree in C is %lf degree in Farhenhite",F,C);

}
int main() {
    int opt;
    double C,F;
    printf("Enter your choice:\nEnter 1 for Celcius to Farhenhite.\nEnter 2 for Farenhite to Celcius.\n ");
    scanf("%d",&opt);

    switch (opt){
        case 1:
        printf("Enter degree in Celcius\n");
        scanf("%lf",&C);
        C_to_F(C);
        break;

        case 2:
        printf("Enter degree in Farenhite\n");
        scanf("%lf",&F);
        F_to_C(F);
        break;

        case 3: exit(0);

        default : printf("Enter valid choice ");
    }
return 0;
}