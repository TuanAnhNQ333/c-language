#include<stdio.h>
int main()
{
    char s ='*';
    for (int i = 1; i <= 10; i = i + 1)
    {
        printf("%c\n",'*');
        for(int j = 1; j <= i && j <= 10; j = j + 1)
        {
            printf("%c",'*');
        }
    }
    return 0;
}