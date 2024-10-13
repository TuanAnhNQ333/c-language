#include<stdio.h>
#include<string.h>
void get1(char *a, int n) {
    fgets(a,101, stdin);
}
void get2(char *b, int n) {
    fgets(b,101,stdin);
}
void check1(char *a, int n) {
    for(int i = 0; i < n-1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}
void check2(char *b, int n) {
     for(int i = 0; i < n-1; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            if(b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}
int main() {
    char a[101] = {0};
    char b[101] = {0};
    int n;
    get1(a,n);
    get2(b,n);
    check1(a,n);
    check2(b,n);
    printf("%s %s", a, b);
    return 0;
}
