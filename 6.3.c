#include<stdio.h>
int main()
{
    int a;
    printf("Nhap so tuoi cua ban :\n");
    scanf("%d", &a);
    if((0<=a) && (a < 18))
    {
        printf("Tre em \n");
    }
    else if((a >= 18) && (a < 65))
    {
        printf("Nguoi lon \n");
    }
    else if(a >= 65)
    {
        printf("Nguoi cao tuoi \n");
    }
    return 0;
}
