#include <stdio.h>

int main() {
  int a;
  int b;
  int c;

  scanf("%d", & a);
  scanf("%d", & b);
  scanf("%d", & c);

  if ((a > b && a > c) || (a > b && b == c))
    printf("a la so lon nhat %d \n", a);
  else if ((b > a && b > c) || (b > a && a == c))
    printf("b la so lon nhat %d \n", b);
  else if ((c > a && c > b) || (c > a && a == b))
    printf("c la so lon nhat %d \n", c);
  else if ((b < a && a == c) || (a < c && b == c) || (b << c && c == a))
    printf("co 2 so lon hon 1 so con lai %d, %d, %d \n",a, b, c);
  else 
    printf(" ba so bang nhau");
  return 0;

}