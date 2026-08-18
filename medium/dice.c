#include <stdio.h>

int play_dice (const char * turns) {
    int up=1, front=2, left=3, back=5, right=4, down=6, temp;

    for (int i = 0;;i++) {
        switch (turns[i]) {
            case 'F':
                temp = up;
                up = back;
                back = down;
                down = front;
                front = temp;
                break;
            case 'B':
                temp = up;
                up = front;
                front = down;
                down = back;
                back = temp;
                break;
            case 'L':
                temp = up;
                up = right;
                right = down;
                down = left;
                left = temp;
                break;
            case 'R': 
                temp = up;
                up = left;
                left = down;
                down = right;
                right = temp;
                break;
            case 'C':
                temp = front;
                front = right;
                right = back;
                back = left;
                left = temp;
                break;
            case 'D':
                temp = front;
                front = left;
                left = back;
                back = right;
                right = temp;
                break;
            default:
                return front;
        }
    }
}

int main () {
    char str[1002];
    int n;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        gets(str);
        printf("%d ", play_dice(str));
    }
}
