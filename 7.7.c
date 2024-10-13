#include <stdio.h>
#include<math.h>
int main() {

    for (int n = 2; n < 100; ++n)
    {if(n%2!=0||n==2)
    {
        int x=1;
        for (int i = 2; i <= sqrt(n); ++i)
        {
            if (n % i == 0) {
                x = 0;
            }
        }

        if (x!=0) {
            printf("%d ", n);
        }
    }}

    return 0;
}

