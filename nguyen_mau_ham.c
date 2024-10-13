#include <stdio.h>
#include <math.h>
void greet();
int tong ( int , int , int );
long long solve (int , long long );
void greet (){
    printf("nguyen mau ham \n");
}
int tong ( int a, int b, int c){
    return a + b + c;
}
long long solve (int a, long long b){
    return 2*a + 3 * b;
}
int main(){
    greet();
    printf("%d\n", tong (10,20,30));
    printf("%lld\n", solve(10,20));
    return 0;
}