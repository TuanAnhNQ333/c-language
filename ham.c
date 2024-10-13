#include<stdio.h>
int giaithua(int a)
{
    int i;
    int giaithua = 1;
    for(i = 1; i <= a; i ++)
        giaithua = giaithua * i;
        return giaithua;

}
int bp(int x)
{
    int y;
    y = x*x;
    return y;
}
int main()
{
    int num;
    printf("nhap so nguyen : \n");
    scanf("%d\n", & num);
    printf("%d! = %d\n", num, giaithua(num));
    int i;
    for (i = 1;i < 20;i += 2)
    printf("%4d\n", bp(i));
    printf("\n");
    return 0;

}