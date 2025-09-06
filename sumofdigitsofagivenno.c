#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        sum += temp % 10;  // get last digit and add to sum
        temp /= 10;         // remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
