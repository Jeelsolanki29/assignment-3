#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);
    for(i = 1; i <= 2*n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}