// viet ham countEven(int *,int*) nhan 1 mang so nguyen va kich thuoc mang lam tham so vao, ham tra ve phan tu la so chan
#include<stdio.h>
int countEven(int *a, int b) 
{
    int i, cnt = 0;
    for(i = 0; i < b;i++, a ++) {
        if(*a % 2 == 0) {
            cnt ++;
        }
    }
    return cnt;
}
int main()
{
    int i,n;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", countEven(a,n));
    return 0;
}