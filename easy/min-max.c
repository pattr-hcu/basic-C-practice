#include <stdio.h>

int main() {
    int n = 0, num[1000];
    scanf("%d", &n);
    if (!(1 <= n && n <= 1000)) {
        printf("Invalid input. n must be a positive integer between 1 and 1000.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if (!(-2000000000 <= num[i] && num[i] <= 2000000000)) {
            printf("Invalid input. Each number must be between -2,000,000,000 and 2,000,000,000.\n");
            return 1;
        }
    }
    
    int min = num[0], max = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
        if (num[i] > max) {
            max = num[i];
        }
    }
    printf("%d\n%d", min, max);

    return 0;
}