// viet chuong trinh dung cau truc while de phan tich ket qua thi : bao nhieu sinh vien do va truot, nhap thong tin sinh vien : 1 la do va 2 la truot
#include<stdio.h>
int soluong(int a)
{
    int n;
    int pass = 0; // so luong sinh vien do 
    int fail = 0; // so luong sinh vien truot
    printf("nhap thong tin sinh vien ( 1 la do va 2 la truot)\nnhap 3 de ket thuc nhap diem\n");
    while (n != 3)
    {
        scanf("%d", &n);
        if(n == 3) {
            break;
        }
        if(n == 1)
        {printf("sinh vien nay do\n");
        pass++;}
        if(n == 2)
        {printf("sinh vien nay truot\n");
        fail++;}
        if(n!=1&&n!=2&&n!=3)
        {printf("du lieu nhap sai, vui long nhap lai\n");
        scanf("%d", &n);}
    }
    printf("so sinh vien do la : %d\n", pass);
    printf("so sinh vien truot la : %d\n", fail);
    
    return soluong(a);
    
}
int main()
{
    int d;
    soluong(d);
    return 0;
}
   
