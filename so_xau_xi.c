#include <stdio.h>

int isUgly(int n) {
    if (n <= 0) {
        return 0;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }
    return n == 1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("No!\n");
        return 1; // Kết thúc chương trình với mã lỗi 1
    }
    if (isUgly(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
