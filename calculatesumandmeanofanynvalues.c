#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    float mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}

