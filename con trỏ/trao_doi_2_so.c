
#include<stdio.h>

//viet mot ham de trao doi hai gia tri
void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    swap(&num1, &num2);
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
    return 0;
}
