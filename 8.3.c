#include<stdio.h>
#include<math.h>
int main()
{
    float xt1 = 1, xt;
    int a = 100;
    
    printf("Nhap 1 so de tinh can bac hai = ");
    scanf("%d", &a);
    printf("a=%d\n", a);
    do {
        xt = xt1;
        xt1 = xt - (xt*xt - a) / (2*xt);
        printf("%f\n", xt1);
    }
    while(fabs(xt1-xt)>1e-5);
    printf("Can bac 2 cua %d la %lf", a, xt1); 
}