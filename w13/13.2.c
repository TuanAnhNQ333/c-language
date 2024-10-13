#include<stdio.h>
#include<string.h>
void check(char *a, int n,char b, char c) {
    for(int i = 0; i < n-1 ; i ++) {
        if(a[i] == b) {
            a[i] = c;
        }
    }
    printf("%s", a);
}
int main() {
    char str[101] = {0};
    char x,y;
    fgets(str,100,stdin);
    scanf("%c %c", &x, &y);
    check(str,strlen(str),x,y);
    return 0;
}