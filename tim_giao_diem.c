#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001

// Hàm tính giá trị của hàm số y1 = e^(ax) với giá trị x
double y1(double a, double x) {
    return exp(a * x);
}

// Hàm tính giá trị của hàm số y2 = x^2 + bx + c với giá trị x
double y2(double b, double c, double x) {
    return x * x + b * x + c;
}

// Hàm tính giá trị của hàm số f(x) = y1(a, x) - y2(b, c, x)
double f(double a, double b, double c, double x) {
    return y1(a, x) - y2(b, c, x);
}

// Hàm tính giá trị của đạo hàm của hàm số f(x)
double f_prime(double a, double b, double x) {
    return a * exp(a * x) - (2 * x + b);
}

// Hàm tìm giao điểm của hai đường cong với độ chính xác 4 số sau dấu phẩy bằng phương pháp Newton-Raphson
double timGiaoDiem(double a, double b, double c) {
    double x_start = -10.0; // Giả sử một điểm bắt đầu

    // Áp dụng phương pháp Newton-Raphson
    while (1) {
        double x_next = x_start - f(a, b, c, x_start) / f_prime(a, b, x_start);
        if (fabs(x_next - x_start) < EPSILON) {
            return x_next;
        }
        x_start = x_next;
    }
}

int main() {
    double a, b, c;
    printf("Nhap gia tri cua a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double x_giao_diem = timGiaoDiem(a, b, c);
    double y_giao_diem = y1(a, x_giao_diem); // hoặc y2(b, c, x_giao_diem) vì cả hai hàm bằng nhau ở giao điểm

    printf("Toa do giao diem: (%.4lf, %.4lf)\n", x_giao_diem, y_giao_diem);

    return 0;
}
