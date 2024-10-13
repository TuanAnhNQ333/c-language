#include <stdio.h>
#define CBEGIN 10
#define CLIMIT 100
#define CSTEP 5

float CF(float C) {
    return (C * 1.8) + 32;
}

int main() {
    printf("Celsius\tFahrenheit\n");

    // Sử dụng vòng lặp macro để chuyển đổi và in ra các giá trị
    for (int  C=CBEGIN; C <= CLIMIT; C += CSTEP) {
        float F = CF(C);
        printf("%d\t%.2f\n", C, F);
    }

    return 0;
}