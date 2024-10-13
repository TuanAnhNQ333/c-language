#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

int main() {
    int arr[ARRAY_SIZE];

    // Thiết lập seed cho hàm rand() bằng thời gian hiện tại
    srand(time(NULL));

    // Khởi tạo mảng gồm 100 số nguyên ngẫu nhiên
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 1000; // Số ngẫu nhiên trong khoảng từ 0 đến 999
    }

    // In các phần tử của mảng
    printf("Các số nguyên ngẫu nhiên là:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sum = 0;
    for(int i = 0; i < ARRAY_SIZE; i ++)
    {
    
        if(arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    
    }
    printf("tong cac so le : %d\n", sum);
    int MIN = arr[0];
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(MIN > arr[i])
        {
            MIN = arr[i];
        }
    }
    printf("gia tri nho nhat : %d\n", MIN);

    return 0;
}
