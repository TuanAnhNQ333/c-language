#include<stdio.h>
#include<string.h>
typedef struct
{ 
 char id[6];  
 char name[31]; 
 float grade;
 char classement;	 
} student;
void nhap(student a[], int n) {
    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        scanf("%s, %s, %f", a[i].id, a[i].name, &a[i].grade);
        if (a[i].grade < 0 || a[i].grade > 10) {
            printf("Khong hop le\n");
        }
    }
}
void xacdinh(student a[], int n) {
    int i;
    for(i = 0; i < n; i ++) {
    if(a[i].grade <= 10 && a[i].grade >= 9) {
        a[i].classement = 'A';
    }
    else if(a[i].grade <= 9 && a[i].grade >= 8) {
        a[i].classement = 'B';
    }
    else if(a[i].grade <= 8 && a[i].grade >= 6.5) {
        a[i].classement = 'C';
    }
    else if(a[i].grade <= 6.5 && a[i].grade >= 0) {
        a[i].classement = 'D';
    }
    }
    
}
void sapxep(student a[], int n)
{
    int i,j;
    for(i = 0; i < n-1; i ++) {
        for(j = i + 1; j < n; j ++) {
            if(a[i].grade < a[j].grade) {
                student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n; // so luong N sinh vien
    int i;
    scanf("%d", &n);
    student a[n];
    nhap (a,n);
    xacdinh(a,n);
    sapxep(a,n);
    
    printf("%-10s%-30s%-10s%-10s\n", "ID", "Ho va Ten" ,"Diem", "Hang");
    for(i = 0; i < n; i ++) {
        printf("%-10s%-30s%-10f%-10c\n", a[i].id,a[i].name,a[i].grade,a[i].classement);
    }
    return 0;
}
