#include <stdio.h>
int main()
{
    int nam;
    scanf("%d", &nam);
    if ((nam % 4 == 0) && (nam % 100 == 0))
       printf(" nam  do la nam nhuan ");
    else
       printf(" nam  do khong la nam nhuan ");
    return 0;
}