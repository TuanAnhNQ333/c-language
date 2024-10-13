#include<stdio.h>
#include<string.h>
void badswap(int a, int b)
{
    int temp;
    temp = a; 
    a = b;
    b = temp;
    printf("called : %d %d\n", a, b);
}
int main(void)
{
    int a = 3, b = 5;
    printf("calling : %d %d\n", a, b);
    badswap(a, b);
    printf("calling : %d %d\n", a, b);
    return 0;
}