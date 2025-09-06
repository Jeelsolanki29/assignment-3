#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");

    for(i = 1; i <= 50; i++) {
        scanf(" %c", &sex);   // note the space before %c to ignore whitespace

        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
        else {
            printf("Invalid code entered for student %d\n", i);
            i--; // repeat this iteration for valid input
        }
    }

    printf("Number of Boys = %d\n", boys);
    printf("Number of Girls = %d\n", girls);

    return 0;
}
