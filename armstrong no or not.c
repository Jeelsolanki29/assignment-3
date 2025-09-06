#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the sum of cubes of each digit
    while (num != 0) {
        remainder = num % 10;           // Get last digit
        sum += remainder * remainder * remainder; // Cube and add
        num /= 10;                     // Remove last digit
    }

    // Check if sum equals the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
