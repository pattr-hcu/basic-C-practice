#include <stdio.h>

int main() {
    int score, mid, final, sum;
    if (scanf("%d %d %d", &score, &mid, &final) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    if (!(0 <= score && score <= 30 && 0 <= mid && mid <= 30 && 0 <= final && final <= 40)) {
        printf("Input values are out of bounds.\n");
        return 1;
    }
    sum = score + mid + final;
    if (sum >= 80) {
        printf("A");
    } else if (sum >= 75) {
        printf("B+");
    } else if (sum >= 70) {
        printf("B");
    } else if (sum >= 65) {
        printf("C+");
    } else if (sum >= 60) {
        printf("C");
    } else if (sum >= 55) {
        printf("D+");
    } else if (sum >= 50) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}