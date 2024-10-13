// dung lenh do - while de in ra cac so nguyen nho hon mot so cho truoc
#include<stdio.h>
int main()
{ 
    int i = 0;
    int n;
    printf("gia tri n : \n");
    scanf("%d", &n);
    printf("cac so nho hon n la :\n");
    while (i < n-1)
    {
        i++;
        printf("%d\n", i);
    }
    
    return 0;
    
}