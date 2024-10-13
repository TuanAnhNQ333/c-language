// ngay thang nam hop le phai dat yeu cau : la so nguyen duong, thang <= 12, ngay <= 31 va 1970 < nam < 2024
// nhap ngay thang nam sinh vien theo format : ngay-thang-nam, ho va ten
// moi sinh vien 1 dong, so luong toi da la 100 sinh vien, nhap den khi gap dau hieu ket thuc la end
// in ra so luong sinh vien nhap vao hop le
//in ra so luong sinh vien cung nam neu so luong do khac 0 va in theo thu tu nam giam dan theo tung dong. 2 con so cùng dòng cách nhau bởi 1 ký tự trắng
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nhapdulieu(int arr[], int n)
{
    int ngay, thang, nam;
    char hoten;

    while (count < MAX_NUMBERS) {
        scanf("%s", input);
        if (strcmp(input, "end") == 0) {
            break;
        }
        int num = atoi(input);
        if (num >= 0) {
            numbers[count] = num;
            count++;
        }
    }

}
void kiemtra()
{
    if(scanf("%d", &ngay) != 1) {
        return 1;
    }
    if(scanf("%d", &thang) != 1) {
        return 1;
    }
    if(scanf("%d", &nam) != 1) {
        return 1;
    }
}
int main()
{
    char hoten;
    int arr[100];
    int n, i;
    for(i = 0; i < n; i ++) {
        scanf("%d-%d-%d", ngay, thang, nam);
        scanf("%c", hoten);
    }
    kiemtra();
    return 0;
}