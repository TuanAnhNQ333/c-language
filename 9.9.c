#include <stdio.h>

int main() {
    int nam;
    
    printf("Nhập năm: ");
    scanf("%d", &nam);
    
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("%d là năm nhuận.\n", nam);
    } else {
        printf("%d không phải là năm nhuận.\n", nam);
    }
    
    return 0;
}
