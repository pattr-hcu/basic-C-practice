#include <stdio.h>

int main() {
    int a, b, sum;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    if (!(0 <= a && a <= 1000000000 && 0 <= b && b <= 1000000000)) {
        printf("Input values are out of bounds.\n");
        return 1;
    }
    sum = a + b;
    printf("%d", sum);
    return 0;
}