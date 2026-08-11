#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 10000

int main() {
    char str[MAX_LEN + 1];
    int upper = 0, lower = 0;
    
    if (scanf("%10000[a-zA-Z]", str) != 1) {
        printf("No valid alphabetic input found.\n");
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        }
    }

    if (upper > 0 && lower == 0) {
        printf("All Capital Letter");
    } else if (lower > 0 && upper == 0) {
        printf("All Small Letter");
    } else if (upper > 0 && lower > 0) {
        printf("Mix");
    } else {
        printf("No letters found\n");
    }
    
    return 0;
}
