#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("enter n: ");
    scanf("%d", &n);
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    
    }
    printf("sum = %d", sum);
}