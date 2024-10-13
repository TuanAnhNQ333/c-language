// ham 3 bien a, b, c lam tham so rieng roi xoay cac gia tri da duoc luu de cho a chuyen sang b, b sang c va c sang a, kiem tra ham nay trong chuong trinh
#include <stdio.h>

void xoayGiaTri(float *x, float *y, float *z) {
    float temp = *x;  // Lưu giá trị của a vào biến tạm thời
    *x = *y;          // gán giá trị của b cho a
    *y = *z;          // gán giá trị của c cho b
    *z = temp;        // gán giá trị tạm thời cho c
}

int main() {
    float a, b, c;

    printf("Nhap gia tri cua 3 so thuc a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Truoc khi xoay:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    xoayGiaTri(&a, &b, &c); // Gọi hàm xoayGiaTri với các biến là a, b, c

    printf("Sau khi xoay:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    return 0;
}
