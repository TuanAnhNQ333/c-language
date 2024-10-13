#include<stdio.h>
#include<string.h>
int main()
{
    int n,Q;
    int str[10000] = {0};
    int count = 0;
    scanf("%d %d", &n, &Q);
    if(n > 10000) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }
    for(int i = 0; i < n ; i ++) {
        for(int j = i + 1; j < n; j ++) {
            if(str[i] + str[j] == Q) {
                count ++;
            }
        }
    } 
    
    printf("%d\n", count);
    return 0;

}