#include <stdio.h>
int main()
{
    int a, b;
    printf("nhap thang : \n");
    
    scanf("%d", &a);
    
    printf("nhap nam : \n");

    scanf("%d", &b);
    if ( a == 1 || a == 3 ||  a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
    {
        printf(" So ngay cua thang do la 31\n");
    }
    else if ( a == 4 || a == 6 || a == 9 || a == 11)
    {
        printf(" So ngay cua thang la 30 \n");
    }
    else if ( a == 2)
    {
        if (( b % 400 == 0) || (b % 4 == 0 && b % 100 !=0 ))
            printf(" So ngay cua thang la 29 \n");
        else 
            printf(" So ngay cua thang la 28\n" );

    }
    else 
    {
        printf("Thang khong hop le. ");

    }
    return 0;


}