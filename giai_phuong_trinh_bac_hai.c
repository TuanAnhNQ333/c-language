#include <stdio.h>

#include <math.h>

int main() {
  float a, b, c;
  float delta, x1, x2;
  scanf("%fx^2+%fx=%f", a,b,c);

  if (a == 0) {
    printf("Day khong phai phuong trinh bac hai.\n");
    if (b == 0)
    {
        if (c == 0)
        {
            printf("Phuong trinh co vo so nghiem.\n");}
        else
        {
            printf("Phuong trinh vo nghiem.\n");}
    }
    else
    {
        printf("Phuong trinh co 1 nghiem   (-c)/b");}
  } 
  else {
    delta = b * b - 4 * a * c;
    if (delta < 0) {
      printf("Phuong trinh vo nghiem.\n");
    } else if (delta == 0) {
      x1 = -b / (2 * a);
      printf("Phuong trinh co nghiem kep x = %0.5f\n", x1);
    } else {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("Phuong trinh co hai nghiem phan biet:  %0.5f,  %0.5f\n", x1, x2);
    }
  }
  return 0;
}