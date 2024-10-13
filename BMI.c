#include <stdio.h>
int main()
{
    float a; // a la can nang 
    float b; // b la chieu cao
    float c; // c la chi so bmi
   
    
    printf("Nhap so can nang (tinh theo kg) : \n");

    scanf("%f", &a);

    printf("Nhap chieu cao (tinh theo m) : \n");
    
    scanf("%f", &b);
   
     c = a/(b*b);

    if (c < 18.5)
        printf("Nhe can, BMI = %f",c);
    else if ((c > 18.5) && (c < 24.9))
        printf("Binh thuong, BMI = %f", c);
    else if ((c >= 25) && (c < 30))
        printf("Thua can, BMI = %f",c);
    else if ((c >= 30) && (c < 35))
        printf("Beo phi do 1, BMI = %f",c);
    else 
        printf("beo phi do 2 tro len, BMI = %f",c);



   return 0;     

}