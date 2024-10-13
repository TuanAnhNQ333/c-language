#include<stdio.h>
int main(void)
{
    double total_pay;
    int count_emp;
    int number_emp;
    double hours;
    double rate;
    double pay;
    // nhap so nhan vien 
    printf("Enter number of employees >");
    scanf("%d", &number_emp);
    //itnh luong tung nhan vien  va cong vao tong luong phai tra
    total_pay = 0.0;
    count_emp = 0;
    while(count_emp < number_emp)
    {
        printf("Hours>");
        scanf("%lf", &hours);
        printf("Rate > $");
        scanf("%lf", &rate);
        pay = hours * rate;
        printf("pay is $%6.2f\n\n", pay);
        total_pay = total_pay + pay;
        count_emp = count_emp + 1;
    
    }
    printf("All employees processed\n");
    printf("total payroll is $%8.2f\n", total_pay);
    return 0;

}