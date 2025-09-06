#include <stdio.h>

int main() {
    int num, temp, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        int digit = temp % 10;      // get last digit
        reversed = reversed * 10 + digit; // append digit
        temp /= 10;                 // remove last digit
    }

    printf("Reversed number of %d = %d\n", num, reversed);

    return 0;
}
