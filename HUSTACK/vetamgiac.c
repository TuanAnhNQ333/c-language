#include <stdio.h>
 
void printnchars(int ch, int n)
{
    for (int i = 1; i <= n; i++) {
        printf("%c", ch);
    }
}
 
int main()
{
    int height;
    printf("Nhap chieu cao: ");
    scanf("%d", &height);
    if(height < 0 || height > 30) {
        return 0;
    }
    printnchars('*', 2*height-3);
    printf("\n");

    for (int j = 1; j < height - 1; j++) {
        printnchars('*', j);
        printnchars(' ', 2*height-3-2*j);
        printnchars('*', j);
        printf("\n");
    }
    printnchars('*', 2*height-3);
}
