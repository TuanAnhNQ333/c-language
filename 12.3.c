#include <stdio.h>

void congThem100(float *x) {
    *x += 100;
}

int main() {
    float a, b, c;

    printf("Nhap gia tri cua 3 so thuc a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    congThem100(&a);
    congThem100(&b);
    congThem100(&c);

    printf("Sau khi cong them 100:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    return 0;
}
