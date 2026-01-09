#include <stdio.h>

int main() {
    float a, b, c, sum, avg, p;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3;
    p = sum *100/300;

    printf("Sum = %2f\n", sum);
    printf("Average = %2f\n", avg);
    printf("Percentage = %2f\n", p);

    return 0;
}
