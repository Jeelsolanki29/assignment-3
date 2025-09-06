#include <stdio.h>

int main() {
    int num, temp, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        int digit = temp % 10;           // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        temp /= 10;                      // remove last digit
    }

    if(reversed == num)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}
