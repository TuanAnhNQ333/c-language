#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhập số nguyên n: ");
    scanf("%d", &n);

    printf("Các số nguyên tố từ 2 đến %d là:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
