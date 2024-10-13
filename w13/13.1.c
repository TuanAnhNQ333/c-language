#include<stdio.h>
#include<string.h>
void check(char *a, int n) {
    int count=0;
    for(int i = 0; i < n-1 ; i ++) {
        if(a[i] != ' ' && a[i] != '\t' && a[i] != '\n') {
            count ++;
        }
        while(i<n-1 && a[i] != ' ' && a[i] != '\t'){
            ++i;
        }
    }
    printf(" %d", count - 1);
}
int main() {

    char str[101] = {0};
    fgets(str,100,stdin);
    check(str,strlen(str));
    return 0;
}