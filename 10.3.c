#include <stdio.h>

#define MAX_SIZE 100

// Hàm nhập mảng
void nhapMang(int arr[], int n) {
    printf("Nhập %d số nguyên:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Hàm so sánh hai mảng
int soSanhMang(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Trả về 0 nếu có ít nhất một phần tử khác nhau
        }
    }
    return 1; // Trả về 1 nếu tất cả các phần tử đều giống nhau
}

int main() {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int n;

    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    nhapMang(arr1, n);
    nhapMang(arr2, n);

    if (soSanhMang(arr1, arr2, n)) {
        printf("1\n"); // In 1 nếu hai mảng giống nhau
    } else {
        printf("0\n"); // In 0 nếu hai mảng khác nhau
    }

    return 0;
}
