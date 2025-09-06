#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= 2*n; i += 2) {
        sum += i;
    }
    printf("sum of first %d even numbers = %d\n", n, sum);

    return 0;
}