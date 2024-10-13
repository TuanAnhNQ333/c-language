#include <stdio.h>

int main() {
    int N, sum;
    printf("N = ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
