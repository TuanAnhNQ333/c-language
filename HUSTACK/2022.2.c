
#include <stdio.h>
 
int main()

{

    char s[50]={0}, t[50]={0};
    int n[95]={0},i,j;
    scanf("%s\n%s", &s,&t);
    for(i=0;s[i]!='\0';i++){

        int k = s[i] - '0';       

        n[k]+=1;

    }

    for(i=0;t[i]!='\0';i++){

        int h = t[i] - '0';

        n[h]+=1;

    }

    for(j=0;j<=94;j++){

        if(n[j]!=0)

            printf("%c", j +'0');

    }

    printf("\n");

    for(j=0;j<=94;j++){

        if(n[j]!=0)

            printf("%d\n",n[j]);

    }

    return 0;

}