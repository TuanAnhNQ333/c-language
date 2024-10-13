#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("so sinh vien la : \n");
    scanf("%d", &n);
    int e = n/7;
    float c = n/7;
    int d = n%7;
    int f = e + 1;
    int g = 7 - d;
   
    if(d == 0)
    {
        printf("so sinh vien trong 7 lop bang nhau va bang %d\n", e);
    }
    else if((d>0) && (d <= 6))
    {
        
        printf("so sinh vien trong lop nho nhat la %d\n", e);
        printf("so sinh vien trong lop lon nhat la %d\n", f);
        printf("so sinh vien trung binh trong cac lop %f\n", c);
        printf("so lop co so sinh vien tren kich thuoc trung binh %d\n", d);
        printf("so sinh vien trong cac lop lon hon kich thuoc trung binh %d\n", f);
        printf("so lop co kich thuoc bang dung kich thuoc trung binh %d\n", g);
        
    }
    return 0;
}
