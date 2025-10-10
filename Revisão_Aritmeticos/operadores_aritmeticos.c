#include <stdio.h>
#include <math.h>
int main() {
    int a = 15, b = 4;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (double)a / b);
    printf("a / b (int) = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("a ^ b (pow) = %.0f\n", pow(a, b));
    return 0;
}