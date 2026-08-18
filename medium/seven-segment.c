#include <stdio.h>
#include <string.h>

int convert(char s[3][4]) {
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "| |") == 0 && strcmp(s[2], "|_|") == 0) return 0;
    if (strcmp(s[0], "   ") == 0 && strcmp(s[1], "  |") == 0 && strcmp(s[2], "  |") == 0) return 1;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], " _|") == 0 && strcmp(s[2], "|_ ") == 0) return 2;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], " _|") == 0 && strcmp(s[2], " _|") == 0) return 3;
    if (strcmp(s[0], "   ") == 0 && strcmp(s[1], "|_|") == 0 && strcmp(s[2], "  |") == 0) return 4;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "|_ ") == 0 && strcmp(s[2], " _|") == 0) return 5;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "|_ ") == 0 && strcmp(s[2], "|_|") == 0) return 6;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "  |") == 0 && strcmp(s[2], "  |") == 0) return 7;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "|_|") == 0 && strcmp(s[2], "|_|") == 0) return 8;
    if (strcmp(s[0], " _ ") == 0 && strcmp(s[1], "|_|") == 0 && strcmp(s[2], " _|") == 0) return 9;
    return 0;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    getchar();

    char line[3][100];
    long long num1 = 0, num2 = 0;

    for (int i = 0; i < 3; i++) {
        fgets(line[i], sizeof(line[i]), stdin);
    }
    for (int j = 0; j < A; j++) {
        char digit[3][4];
        for (int i = 0; i < 3; i++) {
            strncpy(digit[i], &line[i][j * 4], 3);
            digit[i][3] = '\0';
        }
        num1 = (num1 * 10) + convert(digit);
    }

    for (int i = 0; i < 3; i++) {
        fgets(line[i], sizeof(line[i]), stdin);
    }
    for (int j = 0; j < B; j++) {
        char digit[3][4];
        for (int i = 0; i < 3; i++) {
            strncpy(digit[i], &line[i][j * 4], 3);
            digit[i][3] = '\0';
        }
        num2 = (num2 * 10) + convert(digit);
    }

    printf("%lld\n", num1 + num2);

    return 0;
}