#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_N 100

bool isSafe(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] == A[j] || abs(A[i] - A[j]) == abs(i - j)) {
                return false;
            }
        }
    }
    return true;
}

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

    if (isSafe(A, N)) {
        printf("Safe\n");
    } else {
        printf("Check\n");
    }

    return 0;
}
