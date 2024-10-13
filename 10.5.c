// cho 1 mang so nguyen : 
// dem so phan tu la so 0 trong mang
// tim chieu dai cua chuoi con dai nhat chua cac so giong nhau(tat ca phan tu deu la so 0)
// tim so lan xuat hien cua cac so
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count0(int arr[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            dem++;
        }
    }
    return dem;
}

int length0(int arr[], int n) {
    int maxLen = 0;
    int currentLen = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 0;
        }
    }
    return maxLen;
}

void countlap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                    arr[j] = -1; 
                }
            }
            printf("Số %d xuất hiện %d lần\n", arr[i], count);
        }
    }
}

int main() {
    srand(time(NULL)); 

    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Dãy số ngẫu nhiên:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Tạo số ngẫu nhiên từ 0 đến 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Đếm số phần tử là số 0 trong mảng
    int soLuong0 = count0(arr, n);
    printf("Số lượng phần tử là số 0 trong mảng: %d\n", soLuong0);

    // Tìm chiều dài của chuỗi con số 0 dài nhất
    int chieuDaiMax = length0(arr, n);
    printf("Chiều dài của chuỗi con số 0 dài nhất: %d\n", chieuDaiMax);

    // Tìm số lần xuất hiện của các số
    printf("Số lần xuất hiện của các số:\n");
    countlap(arr, n);

    return 0;
}

