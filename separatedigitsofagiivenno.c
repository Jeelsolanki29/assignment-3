#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);

    temp = num;
    while(temp > 0) {
        int digit = temp % 10;  // get last digit
        printf("%d ", digit);
        temp /= 10;             // remove last digit
    }

    printf("\n");

    return 0;
}
