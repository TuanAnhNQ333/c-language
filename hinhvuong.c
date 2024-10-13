#include <stdio.h>
int main()
{
    float c; // goi 1 canh la c
    float s; // goi s la dien tich hinh vuong
    float v; // goi v la the tich cua hinh lap phuong
    
    printf("nhap so cua c la :");
    scanf(" %f",&c);
    
    printf("dien tich cua hinh vuong la %f \n", c*c);
    printf("the tich cua khoi lap phuong la %f \n", c*c*c);
    return 0;
}
