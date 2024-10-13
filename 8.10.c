// tim nghiem lon nhat va nho nhat cua phuong trinh : x^4 - 10x^3sin(x) - 10x^2 + xcos(x) + 1 = 0
// mo rong : phuong trinh co bao nhieu nghiem ?
#include<stdio.h>
#include<math.h>
int main()
{
    double x1;
    double x; // x la nghiem cua phuong trinh
    double pow(double, double);
    int count = 0; // dem so nghiem
    double tu = (pow(x,4) - 10*pow(x,3)*sin(x) - 10*pow(x,2) + x*cos(x) + 1);
    double mau = 4*pow(x,3) - 30*pow(x,2)*sin(x) - 10*pow(x,3)*cos(x)- 20*x + cos(x) - x*sin(x);
    do
    {
        x1 = x;
        x1 = x - (pow(x,4) - 10*pow(x,3)*sin(x) - 10*pow(x,2) + x*cos(x) + 1)/(4*pow(x,3) - 30*pow(x,2)*sin(x) - 10*pow(x,3)*cos(x)- 20*x + cos(x) - x*sin(x));
        if(x = x1)
        {
            printf("the solution is : %lf", &x1);
        }
    }
    while((x1 - x)>1e-5);
    printf("gia tri nghiem phuong trinh la : %f\n", x);
    printf("so nghiem cua phuong trinh la : %d\n", count);
    return 0;
    
}