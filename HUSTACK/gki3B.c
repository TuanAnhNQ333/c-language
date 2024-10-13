#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, d;
    scanf("x^4%f*x^3%f*x^2%f*x%f", &a, &b, &c, &d);

    double delta = 36 * a * a - 96 * b;
    if (delta > 0) {
        double y = sqrt(delta);
        float x1 = ((-6 * a) + y) / 24;
        float x2 = ((-6 * a) - y) / 24;
        
        float fx1 = 4 * x1 * x1 * x1 + 3 * a * x1 * x1 + 2 * b * x1 + c;
        float fx2 = 4 * x2 * x2 * x2 + 3 * a * x2 * x2 + 2 * b * x2 + c;

        if ((fx1 > 0 && fx2 < 0) || (fx1 < 0 && fx2 > 0)) {
            printf("true");
        } else {
            printf("false");
        }
    } else {
        printf("false");
    }

    return 0;
}
