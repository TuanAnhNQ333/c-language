#include<stdio.h>
int arr_length(int arr[])
{
    int i;
    int count = 0;
    for(i = 0; arr[i] != '\0'; i ++) {
        count ++;
    }
    return count;
}
void nhap(int a[], int n)
{
    printf("nhap cac phan tu trong mang : \n");
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
}
void in(int a[], int n)
{
    for(int i = 0; i < n; i ++) {
        printf("%d", a[i]);
    }
}
int sum(int a[], int n)
{
    int res = 0; 
    for(int i = 0; i < n; i ++) {
        res += a[i];
    }
    return res;
}
int main()
{
    int n; 
    int a[1000];
    scanf("%d", &n);
    nhap(a,n);
    in(a,n);
    printf("\ntong cac phan tu trong mang la : %d", sum(a,n));
    printf("\n");
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    n = arr_length(arr);
    printf("length of array is : %d", n);
    return 0;
}