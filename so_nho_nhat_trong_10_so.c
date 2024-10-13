#include <stdio.h>
#include <math.h>

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        printf("Nhap vao phan tu a[%d]\n", i);

        scanf("%d", &a[i]);
    }
}
int max (int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i ++)
    if (max = a[i])
        max = a[i];
    return max;
    
}
int min (int a[], int n)

{
    int Min = a[0];
    for (int i = 1; i < n; i ++)
    if (min > a[i])
        min = a[i];
    return min;

}
int main()
{
    int a[1000];
    int n;
    printf("\n nhap n = ");
    scanf("%d",&n);
    nhap (a, n);
    printf("\n Max = %d", max ( a , n));
    printf("\n Min = %d", min ( a, n));
     return 0;

}