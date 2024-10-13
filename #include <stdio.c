#include <stdio.h>
#include <math.h>
int cp(int n)
{
    int can;
    can = sqrt(n);
    if ( can * can == n)
    {printf("so do la so chinh phuong\n");
    return 1;};
}
int main ()
{
    int n;
    printf("nhap so n : \n");
    scanf("%d\n", &n);
    printf("xet ket qua chinh phuong : \n", cp(20));
    for (int i = 0; i <= sqrt(n); i ++)
    {printf("%d\n", i * i);}
    return 0;
}