#include <stdio.h>
#include <string.h>

struct sinhvien
{
    char id[6];
    char name[31];
    float grade;
    char classement;
};

// Sinh viên được xếp hạng dựa trên điểm số theo tiêu chí sau :
// từ 9 tới 10: A (Excellent)
// từ 8 tới 9: B (Good)
// từ 6.5 tới 8: C (Medium)
// < 6.5 : D (Bad)

// 1- Các bận nhập số liệu theo định dạng:
// Dòng 1 là số lượng N sinh viên
// N dòng tiếp theo là thông tin sinh viên theo định dạng:
// strid, Ho va Ten, grade
// Ví dụ:
// a1234, Nguyễn Văn Chí, 9.0
// Số liệu nhập sai thì sẽ in ra "Khong hop le" và thoát

// 2- Sắp xếp theo thứ tự điểm giảm dần và in ra theo định dạng

// Có 4 cột: strid, Ho va Ten, Diem, Hang có độ rộng tương ứng là 10, 30, 10, 10. Cân lề trái. Với số thực in 1 số sau dấu phẩy.
int nhap(struct sinhvien *a, int n)
{
    scanf("%d", &n); // n la so luong sinh vien
    if(n <= 0 || n >= 100) 
    {
        printf("Khong hop le");
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %f", &a[i].id[6], &a[i].name[31], &a[i].grade);
        if (a[i].grade < 0 || a[i].grade > 10)
        {
            printf("Khong hop le");
        }
    }
    return 1;
}
void phanloai(struct sinhvien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].grade <= 10 && a[i].grade > 9)
        {
            a[i].classement = 'A'; // Excellent
        }
        if (a[i].grade <= 9 && a[i].grade > 8)
        {
            a[i].classement = 'B'; // Good
        }
        if (a[i].grade <= 8 && a[i].grade > 6.5)
        {
            a[i].classement = 'C'; // Medium
        }
        if (a[i].grade <= 6.5)
        {
            a[i].classement = 'D'; // Bad
        }
    }
}
void sapxep(struct sinhvien *a, int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].grade < a[j].grade)
            {
                struct sinhvien temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// Hàm để in danh sách sinh viên
void print(struct sinhvien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-10s %-30s %-10f %-10c\n", a[i].id, a[i].name, a[i].grade, a[i].classement);
    }
}
int main()
{
    struct sinhvien a[100];
    int n;
    if(!nhap(a,n)) 
    {
        return 0;
    }
    nhap(a, n);
    phanloai(a, n);
    sapxep(a, n);
    print(a, n);
    return 0;
}