#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(const char *code) {
    if (strlen(code) != 7) {
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        if (!isalpha(code[i])) {
            return 0;
        }
    }
    for (int i = 3; i < 7; i++) {
        if (!isdigit(code[i])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char code[101];

    printf("Nhap ma so khach hang: ");
    scanf("%100s", code);

    if (check(code)) {
        printf("Ma so dung khuon dang.\n");
    } else {
        printf("Ma so sai khuon dang.\n");
    }

    return 0;
}
