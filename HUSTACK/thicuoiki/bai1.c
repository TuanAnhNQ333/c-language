#include <stdio.h>
#include <math.h>
double gpa(double a[], int b[], int n)
{
    double diem = 0;
    int tinchi = 0;
    double sum;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] < 4) {
            diem = 0;
        } else if (a[i] >= 4 && a[i] < 5) {
            diem = 1;
        } else if (a[i] >= 5 && a[i] < 5.5) {
            diem = 1.5;
        } else if (a[i] >= 5.5 && a[i] < 6.5) {
            diem = 2;
        } else if (a[i] >= 6.5 && a[i] < 7) {
            diem = 2.5;
        } else if (a[i] >= 7 && a[i] < 8) {
            diem = 3;
        } else if (a[i] >= 8 && a[i] < 8.5) {
            diem = 3.5;
        } else if (a[i] >= 8.5 && a[i] <= 10) {
            diem = 4;
        }
        
        sum += diem * b[i];
        tinchi += b[i];
    }

    return tinchi > 0 ? sum / tinchi : 0;
}
int main() {
    int n;
    printf("Nhập số lượng môn học: ");
    scanf("%d", &n);

    double a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        printf("Nhập điểm và tín chỉ cho môn học thứ %d (nhập -1 -1 để dừng): ", i + 1);
        scanf("%lf %d", &a[i], &b[i]);
        if (a[i] == -1 || b[i] == -1) {
            n = i;
            break;
        }
    }

    double result = gpa(a, b, n);
    printf("GPA: %.2lf\n", result);

    return 0;
}