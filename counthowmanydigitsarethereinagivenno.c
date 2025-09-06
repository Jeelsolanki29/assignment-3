#include <stdio.h>

int main() {
    int num, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    if(temp == 0) {
        count = 1; // special case for 0
    } else {
        while(temp != 0) {
            temp /= 10;  // remove last digit
            count++;
        }
    }

    printf("Number of digits in %d = %d\n", num, count);

    return 0;
}
