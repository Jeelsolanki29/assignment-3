#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Loop to find factors up to half of num
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {   // If i is a factor
            sum += i;         // Add it to sum
        }
    }

    // Check if sum equals the original number
    if (sum == num) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
