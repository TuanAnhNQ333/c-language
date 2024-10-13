#include <stdio.h>
#include <math.h>
void bang_gia ()
{
    printf("1. Thue 1 ngay : 3$\n");
    printf("2. Thue 3 ngay : 5$\n");
    printf("3. Thue hang tuan : 7$/tuan\n");
}
int choose (int n)
{
    int chon = 1;
    if ( n == 1)
    {
        printf("So tien cua ban can nop la 3$\n");
    }
    else if ( n == 2)
    {
        printf("So tien cua ban can nop la 5$\n");
    }
    else if ( n == 3)
    {
        printf("So tien cua ban can nop la 7$\n");
    }
    return chon;
}
int main()
{
    int N;
    bang_gia();
    printf("phuong an cua ban la :\n");
    scanf("%d", &N);
    printf("%c\n", choose(N));
    return 0;

}