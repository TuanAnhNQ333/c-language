// viet chuong trinh tinh binh quan diem so, thuat toan : 1 gia tri tong diem va mot gia tri dem duoc doc vao nhap vao den khi gap mot gia tri am thi dung, 
//in ket qua ra ngay lap tuc

#include<stdio.h>
int main()
{
    double n;
    double sum = 0; // gia tri tong diem
    int count = 0; // gia tri cua bien dem
    printf("nhap diem (0 <= diem <= 10)\n");
    while(n)
    {
        scanf("%lf", &n);
        if(n<0 || 10<n)
        {
            printf("du lieu nhap sai, vui long nhap lai\n");
            scanf("%lf\n", &n);
        }
        if(0<=n && n<=10)
        {
            sum += n; // gia tri tong duoc cong them n
            count ++; // bien dem cong them 1 sau moi lan nhap
            printf("gia tri trung binh cua diem la : %lf\n", sum / count);
            
        }
    }
    return 0;

}