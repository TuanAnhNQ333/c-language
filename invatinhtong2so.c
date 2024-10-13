#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int x;
  int y;
  scanf("%d", & x);
  scanf("%d", & y);
  int result = sum(x, y); // Gọi hàm sum và lưu kết quả vào result
  printf("%d", result);
  return 0;
}