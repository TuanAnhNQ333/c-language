#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    float a,b,c,d;
    scanf("x^4%fx^3%fx^2%fx%f",&a,&b,&c,&d);
    double x= 36*a*a-96*b,y=sqrt(x);
    if(x>0){
        float x1=((-6*a)+y)/24,x2=((-6*a)-y)/24;
        float fx1=4*x1*x1*x1+3*a*x1*x1+2*b*x1+c;
        float fx2=4*x2*x2*x2+3*a*x2*x2+2*b*x2+c;
        printf("%0.4f %0.4f %0.4f %0.4f",x1,x2,fx1,fx2);
    }else
        printf("false");
 
 
    return 0;
}