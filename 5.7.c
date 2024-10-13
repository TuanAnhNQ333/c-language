#include <stdio.h>
int main()
{
    int x, s[32]={0},i, y, z[32]={0};
    scanf("%d", &x);
    if(x>0){
        for(i=0; i<32; i++){
        s[i]=x%2;
        x=x/2;
    }
        for(i=i-1;i>=0;i--){
        if(i%4==3 && i!=31){
            printf(" ");
        }
        printf("%d",s[i]);
    }
    }
    else{
        y=-x;
        for(i=0; y>0; i++){
        s[i]=y%2;
        if(s[i]==0){
            z[i]=1;
        }else{
            z[i]=0;
        }
        y=y/2;
    }
        for(i=i-1;i>=0;i--){
        if(i%4==3 && i!=31){
            printf(" ");
        }
        printf("%d",z[i]);
    }
    }
    return 0;
}
