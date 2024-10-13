#include<stdio.h>
#include<math.h>
int main()
{
    float a1,b1,c1,a2,b2,c2;
    float d, dx, dy;
    float x1, x2;
    printf("Nhap gia tri cua a1 :\n");
    scanf("%f", &a1);
    printf("Nhap gia tri cua b1 :\n");
    scanf("%f", &b1);
    printf("Nhap gia tri cua c1 :\n");
    scanf("%f", &c1);
    printf("Nhap gia tri cua a2 :\n");
    scanf("%f", &a2);
    printf("Nhap gia tri cua b2 :\n");
    scanf("%f", &b2);
    printf("Nhap gia tri cua c2 :\n");
    scanf("%f", &c2);
    d = fabsf((a1 * b2) - ( a2 * b1));
    dx = fabsf((c1 * b2) - ( c2 * b1));
    dy = fabsf((a1 * c2) - (a2 * c1));
    
    x1 = dx / d;
    x2 = dy / d;

    printf("nghiem x1 la : %f\n", dx);
    printf("nghiem x2 la : %f\n", dy);
    return 0;

}