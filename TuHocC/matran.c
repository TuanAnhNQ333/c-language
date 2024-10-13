// sap xep cac phan tu cua ma tran nxn theo thu tu tang dan
#include<stdio.h>
// ham thuc hhien thuat toan sap xep noi bot tren mang 1 chieu
void bubblesort(int arr[], int n) 
{
    for(int i = 0; i < n - 1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j + 1]) {
                // hoan doi vi tri cua arr[j] va arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}
// ham sap xep ma tran hai chieu
void sortmatrix(int mat[][100], int n) 
{
    int arr[10000];
    int index = 0;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            arr[index++] = mat[i][j];
        }
    }
    // sap xep mang mot chieu
bubblesort(arr, index);
// chuyen mang 1 chieu tro lai ma tran
index = 0;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = arr[index++];
        }
    }
}
int main()
{
    int n;
    int mat[100][100];
    // nhap kich thuoc ma tran
    printf("nhap kich thuoc cua ma tran : \n");
    scanf("%d", &n);
    // nhap cac phan tu cua ma tran
    printf("nhap cac phan tu cua ma tran : \n");
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            scanf("%d", &mat[i][j]);
        }
    }
    // sap xep ma tran
    sortmatrix(mat, n);
    // in ra ma tran sau khi sap xep
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
