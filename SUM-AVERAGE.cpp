#include <stdio.h>

int main() {
    int count = 0;
    float sum = 0, num, avg;

    printf("Enter numbers (0 to terminate):\n");

    do {
        scanf("%f", &num);
        sum += num;
        count++;
    } while (num != 0);

    count--;

    if (count > 0) {
        avg = sum / count;
        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
