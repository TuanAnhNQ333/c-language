#include<stdio.h>
// ham thuc hien thuat toan sap xep noi bot
void bubblesort(int arr[], int n) {
    for(int i = 0; i < n - 1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j + 1]) {
                // hoan doi arr[j] va arr[j + 1] 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubblesort2(int arr[], int n) {
    for(int i = 0; i < n - 1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j + 1]) {
                // hoan doi vi tri cua arr[j] va arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void bubblesort3(int arr[], int n) 
{
    for(int i = 0; i < n - 1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j + 1]) {
                // hoan doi vi tri cua arr[j] va arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubblesort4(int arr[], int n)
{
    for(int i = 0; i < n - 1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("nhap so phan tu cua mang : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("nhap cac phan tu cua mang : \n");
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    // in ra mang da sap xep
    printf("mang sau khi da sap xep : \n");
    for(int i = 0; i < n; i ++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}