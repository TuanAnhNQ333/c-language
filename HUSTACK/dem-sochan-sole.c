#include <stdio.h>

int main() {
    int n;
    int countchan = 0;
    int countle = 0;
    
    // Nhập số nguyên từ người dùng
    scanf("%d", &n);
    
    // Xử lý số âm
    if (n < 0) {
        n = -n;
    }
    
    // Đếm chữ số chẵn và lẻ
    do {
        int j = n % 10;  // Lấy chữ số cuối cùng
        if (j % 2 == 0) {
            countchan++;
        } else {
            countle++;
        }
        n /= 10;  // Bỏ chữ số cuối cùng
    } while (n > 0);  // Tiếp tục cho đến khi n = 0
    
    // In kết quả
    printf("%d %d\n", countchan, countle);
    
    return 0;
}
