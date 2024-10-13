#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    scanf("%s", c);
    char a ;
    for(int i = 0; i < strlen(c); i++){
        
        for(int j = i + 1; j < strlen(c); j ++)
        if (c[i] > c[j])
        {a = c[i];
        c[i] = c[j];
        c[j] = a;}

    }
    printf("%c", c[0]);
    return 0;
}