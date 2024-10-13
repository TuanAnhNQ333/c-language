#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a, b, c, d;
    scanf("x^4%f*x^3%f*x^2%f*x%f", &a, &b, &c, &d);
    double x = 36*a*a - 96*b;
    double y = sqrt(x);
    if(x > 0) {
        float x1 = ((-6*a)+y)/24;
        float x2 = ((-6*a)-y)/24;
        double x, xn = (x1+x2)/2,fx,Fx;
        do{
            x = xn;
            Fx = 4*x*x*x + 3*a*x*x + 2*b*x + c;
            fx = 12*x*x + 6*a*x + 2*b;
            xn = x - Fx/fx;
        }while(fabs(x-xn) > 1e-5);
        printf("%0.4lf", xn);  
    }
    else
        printf("false");
    return 0;
}
