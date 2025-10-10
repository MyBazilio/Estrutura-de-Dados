#include <stdio.h>
int main() {
    int n = 10, total = 0;
    for (int i = 1; i <= n; i++) total += i;
    printf("sum of 1..10 = %d\n", total);
    int a = 0, b = 1;
    printf("fibs: ");
    for (int i = 0; i < 10; i++) {
        printf("%d%s", a, i<9 ? ", " : "\n");
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}