#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int *ptr1;
    int *ptr2; // *ptr giong nhu 1 so
    ptr1 = &a; // khai bao ptr = &a la dia chi cua con tro va dia chi cua a
    ptr2 = &b;

    int sum;
    sum = *ptr1 + *ptr2;
    printf("%d\n", sum);
    return 0;
}