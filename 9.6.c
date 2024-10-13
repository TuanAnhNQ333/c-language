#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Bảng chuyển đổi độ Fahrenheit sang độ Celsius:\n");
    printf("  Fahrenheit    Celsius\n");
    printf("------------------------\n");
    
    for (fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("    %.1f°F        %.1f°C\n", fahrenheit, celsius);
    }
    
    return 0;
}
