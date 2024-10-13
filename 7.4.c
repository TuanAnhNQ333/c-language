#include<stdio.h>
int main()

{
    int n = 10;
    char c = '*';
    printf("n = \n");
    //scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i ++)
    {
        int j;
        for (j = 1; j <= 2*n - 1; j ++)
        {
            printf("%c\n", c);
            if(i == n || j == n || j == n + i -1 || j == n - i + 1)
            {
                printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }
    }
    
    return 0;
}