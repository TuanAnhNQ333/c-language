#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int n;
    scanf("%s\n", s);
    scanf("%d",&n);
    if(n > strlen(s)) {
        n = strlen(s);
    }
    
    for(int i = 0; i <= n -1 ; i++)
{

     printf("%c",s[i]);
}
    
    return 0;
}