// viet chuong trinh tinh n! dung vong lap : dung bien dem i pham vi 1-n / gia tri f theo tung i!
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("nhap n:\n");
    scanf("%d\n", &n);
    int i = 1;
    int gt = 1;
    while((i >= 1) && (i <= (n - 1))) {
        i++;
        gt = gt * i;
    }
    printf("gia tri cua n giai thua la : n! = %d\n", gt);
    return 0;
}