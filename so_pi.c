#include<stdio.h>
int main()
{
    int n = 0;
    float pi;
    while(n >= 1 && n < 1000000)
    {
        n += 4;
        pi = 4*(1 - 1/(n + 3) + 1/(n + 5));
    }
    printf("gia tri cua so pi la : %6f\n", pi);
    return 0;
}