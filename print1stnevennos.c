#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d even numbers are:\n", n);
    for(i = 2; i <= 2*n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}