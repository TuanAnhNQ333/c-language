#include <stdio.h>
 
int sizeOf(char str[]) {
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        size++;
    }
    return size;
}
 
void reStrcpy(char des[], char sou[], int sizeSou) {
    for (int i = 0; i < sizeSou; i++) {
        des[i] = sou[i];
    }
}
 
int main() {
    char sou[100];        
    char des[500];  
    printf("Nhap chuoi sou: ");
    scanf("%[^\n]s", sou);
    getchar();
    printf("Nhap chuoi des: ");
    scanf("%[^\n]s", des);
 
    reStrcpy(des, sou, sizeOf(sou) + 1);
   
    printf("Chuoi sau khi sao chep: %s\n", des);
 
    return 0;
}
 