#include <stdio.h>

int main() {
    int i, n;
    long long factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("factorial of %d given numbers = %d\n", n, factorial);

    return 0;
}