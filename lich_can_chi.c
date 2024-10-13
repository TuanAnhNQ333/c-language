#include <stdio.h>

char *Can[10] = {"Canh", "Tân", "Nhâm", "Quý", "Giáp", "Ất", "Bính", "Đinh", "Mậu", "Kỷ"};
char *Chi[12] = {"Thân", "Dậu", "Tuất", "Hợi", "Tý", "Sửu", "Dần", "Mão", "Thìn", "Tỵ", "Ngọ", "Mùi"};

void CanChi(int year) {
    int can_index = (year + 6) % 10;
    int chi_index = (year + 8) % 12;

    printf("%d %s %s\n", year, Can[can_index], Chi[chi_index]);
}

int main() {
    int year;
    if (scanf("%d", &year) != 1 || year < 1 || year > 9999) {
        printf("Khong hop le!\n");
        return 1; // Kết thúc chương trình với mã lỗi 1 nếu nhập không hợp lệ
    }
    CanChi(year);
    return 0;
}
