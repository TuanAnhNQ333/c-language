#include <stdio.h>
#include <math.h>

int prime(long long n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0 ) return 0;
    }
    return 1;
}

int is_perfect(long long n){
    for(int p = 1; p <= 33; p++){
        if(prime(p)){
            long long tmp1 = pow(2, p) - 1;
            if(prime(tmp1)){
                long long tmp2 = pow(2, p - 1);
                if(tmp1 * tmp2 == n){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    int n = 1000;
    for(int i = 1; i <= n; i++){
        if(is_perfect(i)){
            printf("%d ", i);
        }
    }
    return 0;
}