#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846264338327950288
double stamgiac(double r)
{
    double stamgiac = (2*r)*(2*r)*sqrt(3)/4;
    return stamgiac;
}
double shinhtron(double r)
{
    double shinhtron = 1/2 * r * r * M_PI;
    return shinhtron;
}
int main()
{
    double r;
    printf("nhap gia tri cua r\n");
    scanf("%lf", &r);
    double scantinh;
    scantinh = stamgiac(r) - shinhtron(r);
    printf("%lf", scantinh);
    return 0;
}