// nhap 1 chuoi so nguyen duong tu ban phim den khi gap dau hieu ket thuc la "end" hoac vuot qua cap phat cho 100 so, co 1 so am cung duoc nhap vao, bo qua so am do
// sau khi thu duoc day so nguyen do hay tinh 
// gia tri trung binh cua day so
// gia tri trung vi cua day so
// in ra ket qua so sanh giua 2 gia tri ben tren
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBERS 100

float tinhTrungBinh(int numbers[], int count) {
    float trungBinh = 0.0;
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    if (count > 0) {
        trungBinh = (float)sum / count;
    }
    return trungBinh;
}


void soSanh(int numbers[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    float trungVi = 0.0;
    if (count % 2 == 0) {
        trungVi = (float)(numbers[count / 2 - 1] + numbers[count / 2]) / 2;
    } else {
        trungVi = numbers[count / 2];
    }


    float trungBinh = tinhTrungBinh(numbers, count);

    if (trungBinh > trungVi) {
        printf("greater\n");
    } else if (trungBinh < trungVi) {
        printf("smaller\n");
    } else {
        printf("equal\n");
    }
}

int main() {
    int numbers[MAX_NUMBERS];
    int count = 0;
    char input[20];

    while (count < MAX_NUMBERS) {
        scanf("%s", input);
        if (strcmp(input, "end") == 0) {
            break;
        }
        int num = atoi(input);
        if (num >= 0) {
            numbers[count] = num;
            count++;
        }
    }

    if (count == 0) {
        
    } else {
        printf("\n");

        soSanh(numbers, count);
    }

    return 0;
}

