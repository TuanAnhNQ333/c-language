// nhap 1 mang n phan tu, kiem tra xem mang co doi xung
#include<stdio.h>
#include<stdbool.h>
bool kiemTraDoiXung(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // kiem tra mang co doi xung khong
    if (kiemTraDoiXung(arr, n)) {
        printf("Mảng là đối xứng.\n");
    } else {
        printf("Mảng không đối xứng.\n");
    }

    return 0;
}