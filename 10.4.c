#include <stdio.h>

void sapXepGiamDan(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sapXepLeGiamDan(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;

    // Nhập dữ liệu từ người dùng
    printf("Nhập 10 số nguyên:\n");
    for (i = 0; i < 10; i++) {
        printf("Nhập số thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng theo thứ tự giảm dần
    sapXepGiamDan(arr, 10);

    // Hiển thị mảng đã sắp xếp
    printf("\nMảng sau khi sắp xếp theo thứ tự giảm dần:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Sắp xếp các số lẻ theo thứ tự giảm dần
    sapXepLeGiamDan(arr, 10);

    // Hiển thị mảng đã sắp xếp với số lẻ theo thứ tự giảm dần
    printf("\n\nMảng sau khi sắp xếp theo thứ tự giảm dần (các số lẻ):\n");
    for (i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
        printf("%d ", arr[i]);
        }
    }

    return 0;
}
