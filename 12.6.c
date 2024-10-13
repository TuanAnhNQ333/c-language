#include <stdio.h>

int incomeplus(int salary, int years) {
    if (years > 3) {
        return salary + 300000;
    } else {
        return salary;
    }
}

int main() {
    printf("Luong moi sau khi tang: %d\n", incomeplus(5000000, 5)); 
    printf("Luong moi sau khi tang: %d\n", incomeplus(7000000, 2)); 
    
    return 0;
}
