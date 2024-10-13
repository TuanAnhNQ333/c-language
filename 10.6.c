// xac dinh ma tran 3x3 A va B, tinh C = AxB, in ra tat ca ma tran
#include <stdio.h>

void nhapMaTran(int mat[3][3]) {
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Phần tử [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void inMaTran(int mat[3][3]) {
    printf("Ma trận:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void nhanMaTran(int matA[3][3], int matB[3][3], int matC[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matC[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    int matA[3][3], matB[3][3], matC[3][3];

    printf("Nhập ma trận A:\n");
    nhapMaTran(matA);

    printf("\nNhập ma trận B:\n");
    nhapMaTran(matB);

    // Nhân ma trận A và B
    nhanMaTran(matA, matB, matC);

    printf("\nMa trận A:\n");
    inMaTran(matA);

    printf("\nMa trận B:\n");
    inMaTran(matB);

    printf("\nMa trận C (A x B):\n");
    inMaTran(matC);

    return 0;
}
