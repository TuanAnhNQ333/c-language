#include<stdio.h>
#include<string.h>
#define PERIOD '\n'
int main()
{ 
    int a;

    char check;
    while ((a = getchar()) != PERIOD)
    {
        if(check =='\t') // tab
            a += 1;
            printf("\\t");
            continue;
            
        if(check =='\b') // backspace
            
            a = 0;
            printf("\\b");
            break;
        
        putchar(check);
         
    }

    return 0;
} 