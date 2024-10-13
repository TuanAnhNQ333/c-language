#include <stdio.h>
#include <math.h>

int main() {
    printf("Các số nguyên tố nhỏ hơn 100 là:\n");
    for (int num = 2; num < 100; num++) {
        int is_prime = 1; 
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}
