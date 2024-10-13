#include<stdio.h>
#include<string.h>
void sapxep(int n, char *str) 
{
    char str[85];
    scanf("%d %s", n, str);
    for(int i = 0; i < strlen(str); i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(str[i] < str[j]) {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() 
{
    int n;
    char str[1000] = {0};
    sapxep(n,str);
    if(n > 10000) {
        return 0;
    }
    printf("%d %s", n, str);
    return 0;

}
