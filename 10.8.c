// dao cac phan tu trong 1 mang
#include<stdio.h>
#include<stdlib.h>

void nhapMang(int arr[], int n)
{   int i;
    for(i = 0; i < n; i ++) {
        printf("phan tu thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void sapxepmang(int arr[], int n)
{
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    printf("Nhap so phan tu cua mang : \n");
    scanf("%d", &n);
    nhapMang(arr,n);
    for(int i = 0; i < n; i ++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    sapxepmang(arr,n);
    for(int i = 0; i < n; i ++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}