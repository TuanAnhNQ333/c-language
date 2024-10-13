#include<stdio.h>
void getsale(double *sales, int size) 
{
    int i;
    for(i = 0; i < size; i ++) {
        printf("doanh so cua quy %d cua cong ty la : ", (i + 1));
        scanf("%lf", (sales + i));
    }
}
double totalsale(const double *sales, int size) {
    double total = 0;
    for(int i = 0; i < size; i++) {
        total += *(sales + i);
    }
    return total;
}
int main()
{
    const int SIZE = 4;
    double sales[SIZE];
    getsale(sales,SIZE);
    printf("tong doanh so : %.2lf\n", totalsale(sales, SIZE));
    return 0;
}
