#include<stdio.h>
#include<math.h>
int salary(int n)
{
    int a;
    int sum ; // sum la tien luong
    int b = 25000;
    int c = 40000;
    printf("so gio trong tuan ma ban da lam : ");
    scanf("%d", &a);
    
    if(a <= 40)
        {
            sum = a * b;
           
        }
    if (a > 40)
        {
            sum = (40 * b + ((a - 40) * c)) ;
            
        }
   return sum;
}
int main()
{
    int N;
    printf("tien luong cua ban la : %d VND", salary(N));
    return 0;

}