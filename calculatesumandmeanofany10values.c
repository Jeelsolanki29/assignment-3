#include <stdio.h>

int main() {
    int i, num;
    int sum = 0;
    float mean;

    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = sum / 10.0;   // use 10.0 to get float division

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
