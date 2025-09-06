#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }
    printf("sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}