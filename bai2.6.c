#include <stdio.h>
int main()
{
    float c; // goi 1 canh la c
    float d; // goi d la chu vi hinh vuong
    float s; // goi s la dien tich hinh vuong
    float S; // goi S la dien tich hinh lap phuong
    float v; // goi v la the tich cua hinh lap phuong
    
    printf("nhap so cua c la :");
    scanf("%f",&c);
 
    printf("dien tich cua hinh vuong la s = %0.f\n", c*c);
    printf("the tich cua khoi lap phuong la v = %0.f\n", c*c*c);
    printf("chu vi hinh vuong la d = %0.f\n", c*4);
    printf("dien tich khoi lap phuong la S =%0.f\n", c*4*6);
    return 0;
}
