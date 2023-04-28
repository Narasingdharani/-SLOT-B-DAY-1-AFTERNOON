#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    float avg;

    printf("Enter a list of numbers (terminate with -1):\n");

    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        count++;
        sum += num;
    }

    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        avg = (float) sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
