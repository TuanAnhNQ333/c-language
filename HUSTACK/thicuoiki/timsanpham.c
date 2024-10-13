#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c[50];
    scanf("%s", c);
    char sp[5][50] = {
        "TV127 31 inch Television",
        "CD057 CD Player",
        "TA877 Answering Machine",
        "CS409 Car Stereo",
        "PC655 Personal Computer"
    };
    for(int i = 0; i <= 5; i ++) {
        if(strstr(sp[i], c) = 1)
    }

}