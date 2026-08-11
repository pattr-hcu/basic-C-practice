#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf %lf", &a, &b);
    if (a < 0 || b < 0) {
        printf("Input values must be non-negative.\n");
        return 1;
    }

    c = sqrt(a * a + b * b);
    printf("%.6f\n", c);

    return 0;
}