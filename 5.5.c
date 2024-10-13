#include<stdio.h>
int main()
{
    float x, y;
    printf("Nhap gia tri cua x : ");
    scanf("%f", &x);
    printf("Nhap gia tri cua y : ");
    scanf("%f", &y);
    if( x > y)
    {printf("x lon hon y");}
    else if ( x == y)
    {printf("x bang y");}
    else 
    {printf("x nho hon y");}
    return 0;

}
    
    