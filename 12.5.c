// khai bao bien int x, y, z va int *p, *q, *r. gan x,y,z 3 gia tri rieng biet, gan p,q,r dia chi cua x,y,z tuong ung, in cac gia tri x,y,z,p,q,r,*p,*q,*r
// hoan chuyen cac gia tri cua x,y,z in ra cac gia tri cua x,y,z,p,q,r,*p,*q,*r
// hoan chuyen cac gia tri cua p,q,r roi in ra cac gia tri cua x,y,z,p,q,r,*p,*q,*r
#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30; // Khai báo và gán giá trị cho x, y, z
    int *p, *q, *r; // Khai báo các con trỏ
    p = &x; // Gán địa chỉ của x cho p
    q = &y; // Gán địa chỉ của y cho q
    r = &z; // Gán địa chỉ của z cho r

    // In các giá trị
    printf("Cac gia tri ban dau:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    // Hoán chuyển các giá trị của x, y, z
    int temp = x;
    x = y;
    y = z;
    z = temp;

    // In các giá trị sau khi hoán chuyển
    printf("\nSau khi hoan chuyen cac gia tri cua x, y, z:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    // Hoán chuyển các giá trị của p, q, r
    int *tempPtr = p;
    p = q;
    q = r;
    r = tempPtr;

    // In các giá trị sau khi hoán chuyển
    printf("\nSau khi hoan chuyen cac gia tri cua p, q, r:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}
