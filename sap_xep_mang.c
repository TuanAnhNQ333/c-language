#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

// Hàm nhập dữ liệu cho mảng
void nhapMang(int arr[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        // Sử dụng rand() để sinh số ngẫu nhiên từ 1 đến 100
        arr[i] = rand() % 100;
    }
}

// Hàm sắp xếp lại mảng
void sapXepMang(int arr[], int n) {
    int tmp;
    // Sử dụng thuật toán sắp xếp nổi bọt để sắp xếp mảng
    for (int i = 0; i < n ; i++) {
        tmp=arr[i];
        for (int j = i+1; j < n ; j++) {
            if (tmp > arr[j]) {
                // Hoán đổi giá trị của hai phần tử nếu chúng không đúng thứ tự
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

// Hàm in mảng
void inMang(int arr[], int n) {
    printf("Mảng sau khi sắp xếp là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[ARRAY_SIZE];
    int n = ARRAY_SIZE;

    // Gọi hàm nhập dữ liệu
    nhapMang(arr, n);

    // In mảng trước khi sắp xếp
    printf("Mảng trước khi sắp xếp là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Gọi hàm sắp xếp mảng
    sapXepMang(arr, n);

    // In mảng sau khi sắp xếp
    inMang(arr, n);

    return 0;
}
