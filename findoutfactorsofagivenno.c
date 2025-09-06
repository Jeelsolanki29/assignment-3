#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop from 1 to num to find all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) { // If i divides num completely
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
