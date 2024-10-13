#include<stdio.h>
#include<math.h>
#include<string.h>
int romanToInt(char* s)
{
    int n;
    int sum;
    char s[101] = {0};
    fgets(s,101,stdin);
    for(int i = 0; i <= n; i ++) {
        if(s[i] == 'I') {
            sum += 1;
        }
        if(s[i] == 'V') {
            sum += 5;
        }
        if(s[i] == 'X') { 
            sum += 10;       
        }
        if(s[i] == 'L') {
            sum += 50;
        }
        if(s[i] == 'C') {
            sum += 100;
        }
        if(s[i] == 'D') {
            sum += 500;
        }
        if(s[i] == 'M') {
            sum += 1000;
        }
        for(int j = 0; j <= n - i - 1; j ++) {
            if(s[j] < s[i])
            {
                sum -= s[j];
            }
        }
    }
    printf("%d", sum);
    


}