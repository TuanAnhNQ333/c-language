// nhap so diem va danh sach toa do cac diem 2d theo cap tu ban phim in ra trong tam cua cac diem tren va hinh chu nhat nho nhat co cac cạnh song song voi cac he truc toa do va bao tron cac diem tren theo dang x1 y1 x2 y3 trong do x1 <= x2 va y1 <= y2
// cac con so cach nhau 1 ky tu trang 
#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

// Hàm tính trung bình cộng của tất cả các tọa độ x và y
struct Point tinhTrungBinh(struct Point points[], int n) {
    struct Point trungBinh = {0.0, 0.0};

    for (int i = 0; i < n; ++i) {
        trungBinh.x += points[i].x;
        trungBinh.y += points[i].y;
    }

    trungBinh.x /= n;
    trungBinh.y /= n;

    return trungBinh;
}

// Hàm tìm hình chữ nhật nhỏ nhất bao quanh các điểm
void timHinhChuNhatNhoNhat(struct Point points[], int n) {
    double minX = points[0].x, maxX = points[0].x;
    double minY = points[0].y, maxY = points[0].y;

    for (int i = 1; i < n; ++i) {
        if (points[i].x < minX) minX = points[i].x;
        if (points[i].x > maxX) maxX = points[i].x;
        if (points[i].y < minY) minY = points[i].y;
        if (points[i].y > maxY) maxY = points[i].y;
    }

    printf("Trong tam cua cac diem: (%.2lf, %.2lf)\n", (minX + maxX) / 2, (minY + maxY) / 2);
    printf("Hinh chu nhat nho nhat co cac canh song song voi truc toa do:\n");
    printf("x1 y1 x2 y2: %.2lf %.2lf %.2lf %.2lf\n", minX, minY, maxX, maxY);
}

int main() {
    int n;
    printf("Nhap so diem: ");
    scanf("%d", &n);

    struct Point points[n];

    printf("Nhap toa do cac diem:\n");
    for (int i = 0; i < n; ++i) {
        printf("Diem %d: ", i + 1);
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }

    // Tính trung bình các tọa độ x và y
    struct Point trungBinh = tinhTrungBinh(points, n);
    printf("Trung tam cua cac diem: (%.2lf, %.2lf)\n", trungBinh.x, trungBinh.y);

    // Tìm hình chữ nhật nhỏ nhất
    timHinhChuNhatNhoNhat(points, n);

    return 0;
}
