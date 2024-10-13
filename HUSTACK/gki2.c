#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_N 100

int main() {
    int A[MAX_N];
    int n = 0;
    char input[1001];
    int N = 0;

    fgets(input, sizeof(input), stdin);

    int num = 0;
    bool is_num = false;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            num = num * 10 + (input[i] - '0');
            is_num = true;
        } else {
            if (is_num) {
                A[n++] = num;
                num = 0;
                is_num = false;
            }
            if (!isspace(input[i])) {
                break;
            }
        }
    }

    N = n;

    bool valid = true;
    for (int i = 0; i < N; i++) {
        if (A[i] < 1 || A[i] > N) {
            valid = false;
            break;
        }
    }

    if (valid) {
        printf("OK\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
