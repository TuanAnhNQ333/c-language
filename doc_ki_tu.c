#include<stdio.h>
int main()
{
    char x[100], y[100];
    printf("nhap ten cua ban : \n");
    scanf("%[a-z,A-Z, ]s", x);
    scanf("%[a-z,A-Z, ]s", y);
    
    
    printf("dau vao la :\n");
    printf("the string \"%s\"\n", x);
    printf("the string \"%s\"\n", y);
    return 0;
}
 