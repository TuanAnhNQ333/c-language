#include <stdio.h>
#include <string.h>

void inten(char *a, int n) {
    int length = strlen(a);
    int last_space = -1;

    for(int i = length - 1; i >= 0; i--) {
        if(a[i] == ' ') {
            last_space = i;
            break;
        }
    }

    if(last_space != -1) {
        for(int j = last_space + 1; j < length; j++) {
            printf("%c", a[j]);
        }
        printf("\n");
    } else {
        printf("%s", a); 
    }
}

int main() {
    char str[100];
    int N;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    inten(str, N);

    return 0;
}
