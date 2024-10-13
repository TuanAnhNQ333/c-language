// giai phuong trinh bang phuong phap newton : exp(x) + x^3 + sin(x) = 0
// ham exp(x) la ham e^x
// phuong phap newton : x2 = x1 - f(x1)/f'(x1)
// x = -0.500941882
#include<stdio.h>
#include<math.h>
int main()
{
    double x; // x la gia tri thay doi thoa man phuong trinh
    double x1 = 1; // x1 la gia tri cua bien x ban dau
    do
    {
        x1 = x;
        x1 = x - (exp(x)+pow(x,3)+sin(x))/(exp(x)+3*pow(x,2)+cos(x));
        if(exp(x) + pow(x,3) + sin(x) == 0)
        {
            x1 = x;
            printf("nghiem phuong trinh la : %lf", x1);
        }
    }
    while(fabs(x1 - x) > exp(-7));
    printf("nghiem la : %lf", x1);
    return 0;
}
