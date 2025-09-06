#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 500 are:\n");

    // Loop through numbers from 2 to 500
    for (num = 2; num <= 500; num++) {
        isPrime = 1; // Assume the number is prime

        // Check for factors from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime if divisible
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
