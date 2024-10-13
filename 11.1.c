#include<stdio.h>
int main()
{
    int a, b, c;
    printf("nhap vao 3 so nguyen");
    scanf("%d %d %d", &a, &b, &c);
    int *p;
    p = &a;
    printf("%p\n", p); // in ra gia tri cua con tro su dung %p
    printf("%d\n", *p);
    p = &b;
    printf("%p\n", p);
    printf("%d\n", *p);
    p = &c;
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}