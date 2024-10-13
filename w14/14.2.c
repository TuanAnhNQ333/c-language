#include<stdio.h>
struct weather
{
    double total;   //tongluongmuatrong 1 thang
    double hight;   //nhietdocaonhat
    double lowt;    //nhietdothapnhat
    double avgt;    //nhietdotrungbinh
};
void nhap(struct weather *a)
{
    for(int i = 0; i < 12; i ++)
    {
        scanf("%lf %lf %lf %lf", &a[i].total, &a[i].hight, &a[i].lowt, &a[i].avgt);
    }
}
void calc(struct weather *a) 
{
    double totalrain = 0;
    double highest = 0;
    double lowest = 0;
    for(int i = 0; i < 12; i ++) {
        totalrain += a[i].total;
    }
    double avgrain = totalrain / 12;
    // sap xep cac gia tri nhiet do thap 
    for(int i = 0; i < 12; i ++) {
        for(int j = 0; j < 12 - i ; j ++) {
            if(a[i].lowt > a[j].lowt) {
                int temp = a[i].lowt;
                a[i].lowt = a[j].lowt;
                a[j].lowt = temp;
            }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        }
    }
    // sap xep cac gia tri nhiet do cao
    for(int i = 0; i < 12; i ++) {
        for(int j = 0; j < 12 - i; j ++) {
            if(a[i].hight > a[j].hight) {
                int temp = a[i].hight;
                a[i].hight = a[j].hight;
                a[j].hight = temp;
            }
        }
    }
    printf("%lf %lf %lf %lf", avgrain, totalrain, a[1].lowt, a[1].hight);
}
int main()
{
    struct weather a[100] = {0};
    nhap(a);
    calc(a);
    return 0;
    
}


