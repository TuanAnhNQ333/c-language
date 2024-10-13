#include<stdio.h>
int main()
{
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    int *p;
    int i;
    // p = &a[1];
    // printf("%p\n", p);
    // p = &a[2];
    // printf("%p\n", p);
    // p = &a[3];
    // printf("%p\n", p);
    // p = &a[4];
    // printf("%p\n", p);
    // p = &a[5];
    // printf("%p\n", p);
    for( i = 0; i <= 4; i ++) {
        p = &a[i];
        printf("%p\n", p);
    }
    return 0;
}