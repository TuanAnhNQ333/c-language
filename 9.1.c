#include<stdio.h>
double dongnang(double m, double v)
{
    double dongnang;
    dongnang = (m*v*v)/2;
    return dongnang;
}
int main()
{
    double ke;
    double m, v;
    printf("khoi luong va van toc : \n");
    scanf("%lf%lf", &m, &v);
    ke = dongnang(m,v);
    printf("%lf", dongnang(m,v));
    return 0;
    
}