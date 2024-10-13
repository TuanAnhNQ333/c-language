#include<stdio.h>
int main()
{
    int a = 5, b = 6, c = 7 ;
    puts("int a = 5, b = 6, c = 7;\n");

    printf("The value of a > b is   \t%i\n\n", a > b);
    printf("The value of b < c is   \t%i\n\n", b < c);

    printf("The value of a + b >= c is \t%i\n\n", a + b >= c);
    printf("The value of a - b <= b - c is \t%i\n\n", a - b <= b - c);

    printf("The value of a = b - c is \t%i\n\n", a = b - c);
    // khi thay the "b - a == b - c " boi " a = b - c", ta da thay doi phep toan tu 
    //kiem tra dieu kien dung sai thanh phep toan gan gia tri
    printf("The value of a * b != c*c is \t%i\n\n", a * b < c * c);
    return 0;
    }