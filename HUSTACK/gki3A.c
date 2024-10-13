#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float calculateValue(float a, float b, float c, float d, float x) {
    return pow(x, 4) + a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

float calculateFirstDerivative(float a, float b, float c, float x) {
    return 4 * pow(x, 3) + 3 * a * pow(x, 2) + 2 * b * x + c;
}

int main() {
    float a, b, c, d;

    scanf("x^4+%fx^3+%fx^2+%fx+%f", &a, &b, &c, &d);

    float discriminant = 36 * a * a - 24 * b;

    if (discriminant < 0) {
        printf("false\n");
    } else {            
        float sqrt_discriminant = sqrt(discriminant);
        float x1 = (-6 * a - sqrt_discriminant) / 12;
        float x2 = (-6 * a + sqrt_discriminant) / 12;

        if (x1 > x2) {
            float temp = x1;
            x1 = x2;
            x2 = temp;
        }    

        printf("%.4f %.4f ", x1, calculateFirstDerivative(a, b, c, x1));
        printf("%.4f %.4f\n", x2, calculateFirstDerivative(a, b, c, x2));
    }

    return 0;
}
