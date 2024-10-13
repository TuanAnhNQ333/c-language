#include <stdio.h>
int main()
{
    int y, m;
    printf("nhap vao so thang cua nam :\n");
    scanf("%d", &m);
    printf("nhap vao so nam : \n");
    scanf("%d", &y);
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf(" thang do co 31 ngay \n ");
            break;
        case 4: case 6: case 9: case 11:
            printf(" thang do co 30 ngay \n ");
            break;
        case 2:
        {
            if ( (y % 400 == 0) || ( y % 4 == 0 && y % 100 != 0))
                printf("thang do co 29 ngay");
            else 
                printf("thang do co 28 ngay");
        }
            break;
        default :
            printf("thang khong hop le");


    }
    return 0;
}