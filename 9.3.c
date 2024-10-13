#include<stdio.h>
#include<math.h>
// ham tinh tong lap phuong
int sum(int n) 
{
    int sum = 0;
    int i;
    for(i = 1; i <= n ; i ++)
    {
        sum += pow(i,3);
        
    }
    return sum;
}
// ham in ra uoc cua n
int uoc(int n)
{
    int i = 0;
    for(i = 1; i <= n; i ++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    return 1;
}
// ham in ra cac binh phuong
int binhphuong(int n)
{
    int i;
    int binhphuong = 0;
    for(i = 1; i <= n; i ++)
    {
        binhphuong = i*i;
        printf("%d ", binhphuong);
    }
    return binhphuong;
}
int main()
{
    int i,n;
    printf("nhap n: ");
    scanf("%d", &n);
    sum(n);
    printf("tong lap phuong : %d\n", sum(n));

    printf("cac uoc cua n : ");
    uoc(n);

    printf("\n");
    printf("cac binh phuong tu 1 den n : ");
    binhphuong(n);
    return 0;
    
}