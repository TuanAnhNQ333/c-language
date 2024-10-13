#include<stdio.h>
int main()
{
    double a;
    printf("Gia tri toa do cua a la : \n");
    scanf("%lf", &a);
    if((a > 0) && (a < 90))
    {
        printf("North - heading - East");
    }
    else if((a > 90) && (a < 180))
    {
        printf("South - 180 Heading - East");
    }
    else if((a > 180) && (a < 270))
    {
        printf("South - 180 Heading - West");
    }
    else if((a > 270) && (a <= 360))
    {
        printf("North - 360 Heading - West");
    }
    return 0;
}
