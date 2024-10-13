#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    float a;
    float b;
    float c;
    float d;
    printf(" nhap vao 3 so a, b, c ",);
    scanf(%f, &a);
    scanf(%f, &b);
    scanf(%f, &c);
    if (a == 0)
    {
        if (b == 0)
           {
            if (c == 0)
               printf("phuong trinh co vo so nghiem");
            else
               printf("phuong trinh vo nghiem");
           }
        else 
            printf(" phuong trinh co nghiem duy nhat la %f ", -c/b);
    }
    else
    {
            d = b*b - 4*a*c;
            if (d == 0)
               printf(" phuong trinh co nghiem kep la %f", -b/(2*a));
            else if (d >0)
               printf(" phuong trinh co hai nghiem la %f", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
            else
               printf(" phuong trinh vo nghiem");
    }
    return 0;
    
}